#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A898
// Address: 0x29a898 - 0x29aaf8
void sub_0029A898_0x29a898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A898_0x29a898");
#endif

    switch (ctx->pc) {
        case 0x29a898u: goto label_29a898;
        case 0x29a89cu: goto label_29a89c;
        case 0x29a8a0u: goto label_29a8a0;
        case 0x29a8a4u: goto label_29a8a4;
        case 0x29a8a8u: goto label_29a8a8;
        case 0x29a8acu: goto label_29a8ac;
        case 0x29a8b0u: goto label_29a8b0;
        case 0x29a8b4u: goto label_29a8b4;
        case 0x29a8b8u: goto label_29a8b8;
        case 0x29a8bcu: goto label_29a8bc;
        case 0x29a8c0u: goto label_29a8c0;
        case 0x29a8c4u: goto label_29a8c4;
        case 0x29a8c8u: goto label_29a8c8;
        case 0x29a8ccu: goto label_29a8cc;
        case 0x29a8d0u: goto label_29a8d0;
        case 0x29a8d4u: goto label_29a8d4;
        case 0x29a8d8u: goto label_29a8d8;
        case 0x29a8dcu: goto label_29a8dc;
        case 0x29a8e0u: goto label_29a8e0;
        case 0x29a8e4u: goto label_29a8e4;
        case 0x29a8e8u: goto label_29a8e8;
        case 0x29a8ecu: goto label_29a8ec;
        case 0x29a8f0u: goto label_29a8f0;
        case 0x29a8f4u: goto label_29a8f4;
        case 0x29a8f8u: goto label_29a8f8;
        case 0x29a8fcu: goto label_29a8fc;
        case 0x29a900u: goto label_29a900;
        case 0x29a904u: goto label_29a904;
        case 0x29a908u: goto label_29a908;
        case 0x29a90cu: goto label_29a90c;
        case 0x29a910u: goto label_29a910;
        case 0x29a914u: goto label_29a914;
        case 0x29a918u: goto label_29a918;
        case 0x29a91cu: goto label_29a91c;
        case 0x29a920u: goto label_29a920;
        case 0x29a924u: goto label_29a924;
        case 0x29a928u: goto label_29a928;
        case 0x29a92cu: goto label_29a92c;
        case 0x29a930u: goto label_29a930;
        case 0x29a934u: goto label_29a934;
        case 0x29a938u: goto label_29a938;
        case 0x29a93cu: goto label_29a93c;
        case 0x29a940u: goto label_29a940;
        case 0x29a944u: goto label_29a944;
        case 0x29a948u: goto label_29a948;
        case 0x29a94cu: goto label_29a94c;
        case 0x29a950u: goto label_29a950;
        case 0x29a954u: goto label_29a954;
        case 0x29a958u: goto label_29a958;
        case 0x29a95cu: goto label_29a95c;
        case 0x29a960u: goto label_29a960;
        case 0x29a964u: goto label_29a964;
        case 0x29a968u: goto label_29a968;
        case 0x29a96cu: goto label_29a96c;
        case 0x29a970u: goto label_29a970;
        case 0x29a974u: goto label_29a974;
        case 0x29a978u: goto label_29a978;
        case 0x29a97cu: goto label_29a97c;
        case 0x29a980u: goto label_29a980;
        case 0x29a984u: goto label_29a984;
        case 0x29a988u: goto label_29a988;
        case 0x29a98cu: goto label_29a98c;
        case 0x29a990u: goto label_29a990;
        case 0x29a994u: goto label_29a994;
        case 0x29a998u: goto label_29a998;
        case 0x29a99cu: goto label_29a99c;
        case 0x29a9a0u: goto label_29a9a0;
        case 0x29a9a4u: goto label_29a9a4;
        case 0x29a9a8u: goto label_29a9a8;
        case 0x29a9acu: goto label_29a9ac;
        case 0x29a9b0u: goto label_29a9b0;
        case 0x29a9b4u: goto label_29a9b4;
        case 0x29a9b8u: goto label_29a9b8;
        case 0x29a9bcu: goto label_29a9bc;
        case 0x29a9c0u: goto label_29a9c0;
        case 0x29a9c4u: goto label_29a9c4;
        case 0x29a9c8u: goto label_29a9c8;
        case 0x29a9ccu: goto label_29a9cc;
        case 0x29a9d0u: goto label_29a9d0;
        case 0x29a9d4u: goto label_29a9d4;
        case 0x29a9d8u: goto label_29a9d8;
        case 0x29a9dcu: goto label_29a9dc;
        case 0x29a9e0u: goto label_29a9e0;
        case 0x29a9e4u: goto label_29a9e4;
        case 0x29a9e8u: goto label_29a9e8;
        case 0x29a9ecu: goto label_29a9ec;
        case 0x29a9f0u: goto label_29a9f0;
        case 0x29a9f4u: goto label_29a9f4;
        case 0x29a9f8u: goto label_29a9f8;
        case 0x29a9fcu: goto label_29a9fc;
        case 0x29aa00u: goto label_29aa00;
        case 0x29aa04u: goto label_29aa04;
        case 0x29aa08u: goto label_29aa08;
        case 0x29aa0cu: goto label_29aa0c;
        case 0x29aa10u: goto label_29aa10;
        case 0x29aa14u: goto label_29aa14;
        case 0x29aa18u: goto label_29aa18;
        case 0x29aa1cu: goto label_29aa1c;
        case 0x29aa20u: goto label_29aa20;
        case 0x29aa24u: goto label_29aa24;
        case 0x29aa28u: goto label_29aa28;
        case 0x29aa2cu: goto label_29aa2c;
        case 0x29aa30u: goto label_29aa30;
        case 0x29aa34u: goto label_29aa34;
        case 0x29aa38u: goto label_29aa38;
        case 0x29aa3cu: goto label_29aa3c;
        case 0x29aa40u: goto label_29aa40;
        case 0x29aa44u: goto label_29aa44;
        case 0x29aa48u: goto label_29aa48;
        case 0x29aa4cu: goto label_29aa4c;
        case 0x29aa50u: goto label_29aa50;
        case 0x29aa54u: goto label_29aa54;
        case 0x29aa58u: goto label_29aa58;
        case 0x29aa5cu: goto label_29aa5c;
        case 0x29aa60u: goto label_29aa60;
        case 0x29aa64u: goto label_29aa64;
        case 0x29aa68u: goto label_29aa68;
        case 0x29aa6cu: goto label_29aa6c;
        case 0x29aa70u: goto label_29aa70;
        case 0x29aa74u: goto label_29aa74;
        case 0x29aa78u: goto label_29aa78;
        case 0x29aa7cu: goto label_29aa7c;
        case 0x29aa80u: goto label_29aa80;
        case 0x29aa84u: goto label_29aa84;
        case 0x29aa88u: goto label_29aa88;
        case 0x29aa8cu: goto label_29aa8c;
        case 0x29aa90u: goto label_29aa90;
        case 0x29aa94u: goto label_29aa94;
        case 0x29aa98u: goto label_29aa98;
        case 0x29aa9cu: goto label_29aa9c;
        case 0x29aaa0u: goto label_29aaa0;
        case 0x29aaa4u: goto label_29aaa4;
        case 0x29aaa8u: goto label_29aaa8;
        case 0x29aaacu: goto label_29aaac;
        case 0x29aab0u: goto label_29aab0;
        case 0x29aab4u: goto label_29aab4;
        case 0x29aab8u: goto label_29aab8;
        case 0x29aabcu: goto label_29aabc;
        case 0x29aac0u: goto label_29aac0;
        case 0x29aac4u: goto label_29aac4;
        case 0x29aac8u: goto label_29aac8;
        case 0x29aaccu: goto label_29aacc;
        case 0x29aad0u: goto label_29aad0;
        case 0x29aad4u: goto label_29aad4;
        case 0x29aad8u: goto label_29aad8;
        case 0x29aadcu: goto label_29aadc;
        case 0x29aae0u: goto label_29aae0;
        case 0x29aae4u: goto label_29aae4;
        case 0x29aae8u: goto label_29aae8;
        case 0x29aaecu: goto label_29aaec;
        case 0x29aaf0u: goto label_29aaf0;
        case 0x29aaf4u: goto label_29aaf4;
        default: break;
    }

    ctx->pc = 0x29a898u;

label_29a898:
    // 0x29a898: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29a898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_29a89c:
    // 0x29a89c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x29a89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_29a8a0:
    // 0x29a8a0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x29a8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_29a8a4:
    // 0x29a8a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29a8a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29a8a8:
    // 0x29a8a8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x29a8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_29a8ac:
    // 0x29a8ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29a8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29a8b0:
    // 0x29a8b0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x29a8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_29a8b4:
    // 0x29a8b4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29a8b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29a8b8:
    // 0x29a8b8: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x29a8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_29a8bc:
    // 0x29a8bc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x29a8bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29a8c0:
    // 0x29a8c0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x29a8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_29a8c4:
    // 0x29a8c4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x29a8c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29a8c8:
    // 0x29a8c8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x29a8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_29a8cc:
    // 0x29a8cc: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x29a8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_29a8d0:
    // 0x29a8d0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x29a8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_29a8d4:
    // 0x29a8d4: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x29a8d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29a8d8:
    // 0x29a8d8: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x29a8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_29a8dc:
    // 0x29a8dc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x29a8dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a8e0:
    // 0x29a8e0: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x29a8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_29a8e4:
    // 0x29a8e4: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x29a8e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29a8e8:
    // 0x29a8e8: 0xafa90020  sw          $t1, 0x20($sp)
    ctx->pc = 0x29a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 9));
label_29a8ec:
    // 0x29a8ec: 0xafaa0024  sw          $t2, 0x24($sp)
    ctx->pc = 0x29a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 10));
label_29a8f0:
    // 0x29a8f0: 0xc0f5240  jal         func_3D4900
label_29a8f4:
    if (ctx->pc == 0x29A8F4u) {
        ctx->pc = 0x29A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8F0u;
        // 0x29a8f4: 0xafab0028  sw          $t3, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A8F8u;
        goto label_29a8f8;
    }
    ctx->pc = 0x29A8F0u;
    SET_GPR_U32(ctx, 31, 0x29A8F8u);
    ctx->pc = 0x29A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A8F0u;
    // 0x29a8f4: 0xafab0028  sw          $t3, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29A8F0u, 0x29A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A8F8u;
label_29a8f8:
    // 0x29a8f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29a8f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29a8fc:
    // 0x29a8fc: 0xc0a6730  jal         func_299CC0
label_29a900:
    if (ctx->pc == 0x29A900u) {
        ctx->pc = 0x29A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8FCu;
        // 0x29a900: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A904u;
        goto label_29a904;
    }
    ctx->pc = 0x29A8FCu;
    SET_GPR_U32(ctx, 31, 0x29A904u);
    ctx->pc = 0x29A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A8FCu;
    // 0x29a900: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299CC0u, 0x29A8FCu, 0x29A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A904u;
label_29a904:
    // 0x29a904: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x29a904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_29a908:
    // 0x29a908: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x29a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_29a90c:
    // 0x29a90c: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x29a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
label_29a910:
    // 0x29a910: 0xae630070  sw          $v1, 0x70($s3)
    ctx->pc = 0x29a910u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 3));
label_29a914:
    // 0x29a914: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29a914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29a918:
    // 0x29a918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29a918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29a91c:
    // 0x29a91c: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x29a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_29a920:
    // 0x29a920: 0xc0d745c  jal         func_35D170
label_29a924:
    if (ctx->pc == 0x29A924u) {
        ctx->pc = 0x29A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A920u;
        // 0x29a924: 0xae60008c  sw          $zero, 0x8C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A928u;
        goto label_29a928;
    }
    ctx->pc = 0x29A920u;
    SET_GPR_U32(ctx, 31, 0x29A928u);
    ctx->pc = 0x29A924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A920u;
    // 0x29a924: 0xae60008c  sw          $zero, 0x8C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x29A920u, 0x29A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A928u;
label_29a928:
    // 0x29a928: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29a928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29a92c:
    // 0x29a92c: 0xc0d745c  jal         func_35D170
label_29a930:
    if (ctx->pc == 0x29A930u) {
        ctx->pc = 0x29A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A92Cu;
        // 0x29a930: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A934u;
        goto label_29a934;
    }
    ctx->pc = 0x29A92Cu;
    SET_GPR_U32(ctx, 31, 0x29A934u);
    ctx->pc = 0x29A930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A92Cu;
    // 0x29a930: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x29A92Cu, 0x29A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A934u;
label_29a934:
    // 0x29a934: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x29a934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29a938:
    // 0x29a938: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x29a938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29a93c:
    // 0x29a93c: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x29a93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_29a940:
    // 0x29a940: 0xc0a57e2  jal         func_295F88
label_29a944:
    if (ctx->pc == 0x29A944u) {
        ctx->pc = 0x29A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A940u;
        // 0x29a944: 0xe661001c  swc1        $f1, 0x1C($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A948u;
        goto label_29a948;
    }
    ctx->pc = 0x29A940u;
    SET_GPR_U32(ctx, 31, 0x29A948u);
    ctx->pc = 0x29A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A940u;
    // 0x29a944: 0xe661001c  swc1        $f1, 0x1C($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x29A940u, 0x29A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A948u;
label_29a948:
    // 0x29a948: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x29a948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_29a94c:
    // 0x29a94c: 0x2363a  dsrl        $a2, $v0, 24
    ctx->pc = 0x29a94cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> 24);
label_29a950:
    // 0x29a950: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x29a950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
label_29a954:
    // 0x29a954: 0x22c3a  dsrl        $a1, $v0, 16
    ctx->pc = 0x29a954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 16);
label_29a958:
    // 0x29a958: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x29a958u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
label_29a95c:
    // 0x29a95c: 0xa3a50002  sb          $a1, 0x2($sp)
    ctx->pc = 0x29a95cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 5));
label_29a960:
    // 0x29a960: 0xa3a60003  sb          $a2, 0x3($sp)
    ctx->pc = 0x29a960u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 6));
label_29a964:
    // 0x29a964: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x29a964u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_29a968:
    // 0x29a968: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x29a968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_29a96c:
    // 0x29a96c: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x29a96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_29a970:
    // 0x29a970: 0xaa620017  swl         $v0, 0x17($s3)
    ctx->pc = 0x29a970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_29a974:
    // 0x29a974: 0xba620014  swr         $v0, 0x14($s3)
    ctx->pc = 0x29a974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_29a978:
    // 0x29a978: 0xc0f52a8  jal         func_3D4AA0
label_29a97c:
    if (ctx->pc == 0x29A97Cu) {
        ctx->pc = 0x29A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A978u;
        // 0x29a97c: 0xae720078  sw          $s2, 0x78($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A980u;
        goto label_29a980;
    }
    ctx->pc = 0x29A978u;
    SET_GPR_U32(ctx, 31, 0x29A980u);
    ctx->pc = 0x29A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A978u;
    // 0x29a97c: 0xae720078  sw          $s2, 0x78($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x29A978u, 0x29A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A980u;
label_29a980:
    // 0x29a980: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x29a980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_29a984:
    // 0x29a984: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x29a984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_29a988:
    // 0x29a988: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x29a988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29a98c:
    // 0x29a98c: 0x0  nop
    ctx->pc = 0x29a98cu;
    // NOP
label_29a990:
    // 0x29a990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29a994:
    // 0x29a994: 0xc0a58d8  jal         func_296360
label_29a998:
    if (ctx->pc == 0x29A998u) {
        ctx->pc = 0x29A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A994u;
        // 0x29a998: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A99Cu;
        goto label_29a99c;
    }
    ctx->pc = 0x29A994u;
    SET_GPR_U32(ctx, 31, 0x29A99Cu);
    ctx->pc = 0x29A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A994u;
    // 0x29a998: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x29A994u, 0x29A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A99Cu;
label_29a99c:
    // 0x29a99c: 0x0  nop
    ctx->pc = 0x29a99cu;
    // NOP
label_29a9a0:
    // 0x29a9a0: 0x1697fffb  bne         $s4, $s7, . + 4 + (-0x5 << 2)
label_29a9a4:
    if (ctx->pc == 0x29A9A4u) {
        ctx->pc = 0x29A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9A0u;
        // 0x29a9a4: 0x26100078  addiu       $s0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A9A8u;
        goto label_29a9a8;
    }
    ctx->pc = 0x29A9A0u;
    {
        const bool branch_taken_0x29a9a0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        ctx->pc = 0x29A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9A0u;
        // 0x29a9a4: 0x26100078  addiu       $s0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a9a0) {
            ctx->pc = 0x29A990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a990;
        }
    }
    ctx->pc = 0x29A9A8u;
label_29a9a8:
    // 0x29a9a8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29a9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29a9ac:
    // 0x29a9ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29a9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29a9b0:
    // 0x29a9b0: 0xae71007c  sw          $s1, 0x7C($s3)
    ctx->pc = 0x29a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 17));
label_29a9b4:
    // 0x29a9b4: 0x24a5be68  addiu       $a1, $a1, -0x4198
    ctx->pc = 0x29a9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950504));
label_29a9b8:
    // 0x29a9b8: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x29a9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_29a9bc:
    // 0x29a9bc: 0xc0d7468  jal         func_35D1A0
label_29a9c0:
    if (ctx->pc == 0x29A9C0u) {
        ctx->pc = 0x29A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9BCu;
        // 0x29a9c0: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A9C4u;
        goto label_29a9c4;
    }
    ctx->pc = 0x29A9BCu;
    SET_GPR_U32(ctx, 31, 0x29A9C4u);
    ctx->pc = 0x29A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A9BCu;
    // 0x29a9c0: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x29A9BCu, 0x29A9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A9C4u;
label_29a9c4:
    // 0x29a9c4: 0x8e64007c  lw          $a0, 0x7C($s3)
    ctx->pc = 0x29a9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_29a9c8:
    // 0x29a9c8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x29a9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_29a9cc:
    // 0x29a9cc: 0xc0d745c  jal         func_35D170
label_29a9d0:
    if (ctx->pc == 0x29A9D0u) {
        ctx->pc = 0x29A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9CCu;
        // 0x29a9d0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A9D4u;
        goto label_29a9d4;
    }
    ctx->pc = 0x29A9CCu;
    SET_GPR_U32(ctx, 31, 0x29A9D4u);
    ctx->pc = 0x29A9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A9CCu;
    // 0x29a9d0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x29A9CCu, 0x29A9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A9D4u;
label_29a9d4:
    // 0x29a9d4: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x29a9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_29a9d8:
    // 0x29a9d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a9dc:
    // 0x29a9dc: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x29a9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29a9e0:
    // 0x29a9e0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29a9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29a9e4:
    // 0x29a9e4: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x29a9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29a9e8:
    // 0x29a9e8: 0x24a5be70  addiu       $a1, $a1, -0x4190
    ctx->pc = 0x29a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950512));
label_29a9ec:
    // 0x29a9ec: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x29a9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29a9f0:
    // 0x29a9f0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x29a9f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_29a9f4:
    // 0x29a9f4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x29a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_29a9f8:
    // 0x29a9f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x29a9f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_29a9fc:
    // 0x29a9fc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x29a9fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_29aa00:
    // 0x29aa00: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x29aa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_29aa04:
    // 0x29aa04: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x29aa04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_29aa08:
    // 0x29aa08: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x29aa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29aa0c:
    // 0x29aa0c: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x29aa0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_29aa10:
    // 0x29aa10: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x29aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_29aa14:
    // 0x29aa14: 0xa0440060  sb          $a0, 0x60($v0)
    ctx->pc = 0x29aa14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 4));
label_29aa18:
    // 0x29aa18: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x29aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_29aa1c:
    // 0x29aa1c: 0xac700064  sw          $s0, 0x64($v1)
    ctx->pc = 0x29aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 16));
label_29aa20:
    // 0x29aa20: 0x8e64007c  lw          $a0, 0x7C($s3)
    ctx->pc = 0x29aa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_29aa24:
    // 0x29aa24: 0xc0d7468  jal         func_35D1A0
label_29aa28:
    if (ctx->pc == 0x29AA28u) {
        ctx->pc = 0x29AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA24u;
        // 0x29aa28: 0x24840078  addiu       $a0, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AA2Cu;
        goto label_29aa2c;
    }
    ctx->pc = 0x29AA24u;
    SET_GPR_U32(ctx, 31, 0x29AA2Cu);
    ctx->pc = 0x29AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AA24u;
    // 0x29aa28: 0x24840078  addiu       $a0, $a0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x29AA24u, 0x29AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AA2Cu;
label_29aa2c:
    // 0x29aa2c: 0x8e64007c  lw          $a0, 0x7C($s3)
    ctx->pc = 0x29aa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_29aa30:
    // 0x29aa30: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x29aa30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_29aa34:
    // 0x29aa34: 0xc0d745c  jal         func_35D170
label_29aa38:
    if (ctx->pc == 0x29AA38u) {
        ctx->pc = 0x29AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA34u;
        // 0x29aa38: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AA3Cu;
        goto label_29aa3c;
    }
    ctx->pc = 0x29AA34u;
    SET_GPR_U32(ctx, 31, 0x29AA3Cu);
    ctx->pc = 0x29AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AA34u;
    // 0x29aa38: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x29AA34u, 0x29AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AA3Cu;
label_29aa3c:
    // 0x29aa3c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x29aa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29aa40:
    // 0x29aa40: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x29aa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29aa44:
    // 0x29aa44: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x29aa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_29aa48:
    // 0x29aa48: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x29aa48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_29aa4c:
    // 0x29aa4c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x29aa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29aa50:
    // 0x29aa50: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x29aa50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_29aa54:
    // 0x29aa54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29aa54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_29aa58:
    // 0x29aa58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29aa58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29aa5c:
    // 0x29aa5c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x29aa5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_29aa60:
    // 0x29aa60: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x29aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_29aa64:
    // 0x29aa64: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x29aa64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_29aa68:
    // 0x29aa68: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x29aa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_29aa6c:
    // 0x29aa6c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x29aa6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_29aa70:
    // 0x29aa70: 0xe4610090  swc1        $f1, 0x90($v1)
    ctx->pc = 0x29aa70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
label_29aa74:
    // 0x29aa74: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x29aa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29aa78:
    // 0x29aa78: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x29aa78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
label_29aa7c:
    // 0x29aa7c: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x29aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_29aa80:
    // 0x29aa80: 0xa04000d8  sb          $zero, 0xD8($v0)
    ctx->pc = 0x29aa80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 216), (uint8_t)GPR_U32(ctx, 0));
label_29aa84:
    // 0x29aa84: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x29aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_29aa88:
    // 0x29aa88: 0xac7000dc  sw          $s0, 0xDC($v1)
    ctx->pc = 0x29aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 16));
label_29aa8c:
    // 0x29aa8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x29aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_29aa90:
    // 0x29aa90: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x29aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_29aa94:
    // 0x29aa94: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x29aa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_29aa98:
    // 0x29aa98: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x29aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29aa9c:
    // 0x29aa9c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29aaa0:
    // 0x29aaa0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x29aaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29aaa4:
    // 0x29aaa4: 0xe660004c  swc1        $f0, 0x4C($s3)
    ctx->pc = 0x29aaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
label_29aaa8:
    // 0x29aaa8: 0xe6620050  swc1        $f2, 0x50($s3)
    ctx->pc = 0x29aaa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
label_29aaac:
    // 0x29aaac: 0xe6610054  swc1        $f1, 0x54($s3)
    ctx->pc = 0x29aaacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
label_29aab0:
    // 0x29aab0: 0xe6630058  swc1        $f3, 0x58($s3)
    ctx->pc = 0x29aab0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
label_29aab4:
    // 0x29aab4: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x29aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_29aab8:
    // 0x29aab8: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x29aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_29aabc:
    // 0x29aabc: 0x60f809  jalr        $v1
label_29aac0:
    if (ctx->pc == 0x29AAC0u) {
        ctx->pc = 0x29AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AABCu;
        // 0x29aac0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AAC4u;
        goto label_29aac4;
    }
    ctx->pc = 0x29AABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29AAC4u);
        ctx->pc = 0x29AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AABCu;
        // 0x29aac0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AABCu, 0x29AAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29AAC4u;
label_29aac4:
    // 0x29aac4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x29aac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29aac8:
    // 0x29aac8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x29aac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29aacc:
    // 0x29aacc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x29aaccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29aad0:
    // 0x29aad0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x29aad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29aad4:
    // 0x29aad4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x29aad4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_29aad8:
    // 0x29aad8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x29aad8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29aadc:
    // 0x29aadc: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x29aadcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_29aae0:
    // 0x29aae0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x29aae0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29aae4:
    // 0x29aae4: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x29aae4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_29aae8:
    // 0x29aae8: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x29aae8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29aaec:
    // 0x29aaec: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x29aaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_29aaf0:
    // 0x29aaf0: 0x3e00008  jr          $ra
label_29aaf4:
    if (ctx->pc == 0x29AAF4u) {
        ctx->pc = 0x29AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AAF0u;
        // 0x29aaf4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AAF8u;
        goto label_fallthrough_0x29aaf0;
    }
    ctx->pc = 0x29AAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AAF0u;
        // 0x29aaf4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29aaf0:
    ctx->pc = 0x29AAF8u;
}
