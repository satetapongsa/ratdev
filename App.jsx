import { StyleSheet, Text, View } from "react-native";
import { SafeAreaProvider, SafeAreaView } from "react-native-safe-area-context";
import React from "react";

const App = () => {
  return (
    <SafeAreaProvider>
      <SafeAreaView style={[st.container]}>
        <View style={[st.container, { backgroundColor: "#b0d4e1", flexDirection: "row", justifyContent:"space-between", alignItems:"center"   }]}>
          <View
            style={[st.Box, { backgroundColor: "blue", width: 60, height: 60 }]}
          >
            <Text>BOX 1</Text>
          </View>
          <View
            style={[st.Box, { backgroundColor: "blue", width: 60, height: 60 }]}
          >
            <Text>BOX 2</Text>
          </View>
          <View
            style={[st.Box, { backgroundColor: "blue", width: 60, height: 60 }]}
          >
            <Text>BOX 3</Text>
          </View>


        </View>

        <View style={[st.container, { backgroundColor: "#c1e1b0" }]}>
          <View style={[st.Box, { backgroundColor: "red" }]}>
            <Text>BOX 4</Text>
          </View>
          <View style={[st.Box, { backgroundColor: "green" }]}>
            <Text>BOX 5</Text>
          </View>
          <View style={[st.Box, { backgroundColor: "blue" }]}>
            <Text>BOX 6</Text>
          </View>
        </View>
      </SafeAreaView>
    </SafeAreaProvider>
  );
};

export default App;

const st = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#e1b0b0",
  },
  Box: {
    width: 100,
    height: 100,
    justifyContent: "center",
    alignItems: "center",
  },

npx expo install react-native-safe-area-context
});
