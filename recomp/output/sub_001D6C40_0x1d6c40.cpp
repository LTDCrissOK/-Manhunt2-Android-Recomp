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

// Function: sub_001D6C40
// Address: 0x1d6c40 - 0x1d7308
void sub_001D6C40_0x1d6c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6C40_0x1d6c40");
#endif

    switch (ctx->pc) {
        case 0x1d6cacu: goto label_1d6cac;
        case 0x1d6ce4u: goto label_1d6ce4;
        case 0x1d6cf0u: goto label_1d6cf0;
        case 0x1d6cf8u: goto label_1d6cf8;
        case 0x1d6d00u: goto label_1d6d00;
        case 0x1d6d2cu: goto label_1d6d2c;
        case 0x1d6d78u: goto label_1d6d78;
        case 0x1d6d90u: goto label_1d6d90;
        case 0x1d6db0u: goto label_1d6db0;
        case 0x1d6dc8u: goto label_1d6dc8;
        case 0x1d6dd0u: goto label_1d6dd0;
        case 0x1d6ddcu: goto label_1d6ddc;
        case 0x1d6de4u: goto label_1d6de4;
        case 0x1d6df8u: goto label_1d6df8;
        case 0x1d6e08u: goto label_1d6e08;
        case 0x1d6e14u: goto label_1d6e14;
        case 0x1d6e24u: goto label_1d6e24;
        case 0x1d6e38u: goto label_1d6e38;
        case 0x1d6e44u: goto label_1d6e44;
        case 0x1d6e4cu: goto label_1d6e4c;
        case 0x1d6e8cu: goto label_1d6e8c;
        case 0x1d6e9cu: goto label_1d6e9c;
        case 0x1d6eb0u: goto label_1d6eb0;
        case 0x1d6ec4u: goto label_1d6ec4;
        case 0x1d6ed0u: goto label_1d6ed0;
        case 0x1d6ee0u: goto label_1d6ee0;
        case 0x1d6efcu: goto label_1d6efc;
        case 0x1d6f0cu: goto label_1d6f0c;
        case 0x1d6f1cu: goto label_1d6f1c;
        case 0x1d6f30u: goto label_1d6f30;
        case 0x1d6f3cu: goto label_1d6f3c;
        case 0x1d6f4cu: goto label_1d6f4c;
        case 0x1d6f60u: goto label_1d6f60;
        case 0x1d6fb8u: goto label_1d6fb8;
        case 0x1d6fd8u: goto label_1d6fd8;
        case 0x1d6ff0u: goto label_1d6ff0;
        case 0x1d7010u: goto label_1d7010;
        case 0x1d7018u: goto label_1d7018;
        case 0x1d7030u: goto label_1d7030;
        case 0x1d703cu: goto label_1d703c;
        case 0x1d7048u: goto label_1d7048;
        case 0x1d7050u: goto label_1d7050;
        case 0x1d7084u: goto label_1d7084;
        case 0x1d7090u: goto label_1d7090;
        case 0x1d7098u: goto label_1d7098;
        case 0x1d70acu: goto label_1d70ac;
        case 0x1d70bcu: goto label_1d70bc;
        case 0x1d70c8u: goto label_1d70c8;
        case 0x1d7114u: goto label_1d7114;
        case 0x1d711cu: goto label_1d711c;
        case 0x1d7130u: goto label_1d7130;
        case 0x1d713cu: goto label_1d713c;
        case 0x1d714cu: goto label_1d714c;
        case 0x1d7160u: goto label_1d7160;
        case 0x1d7170u: goto label_1d7170;
        case 0x1d718cu: goto label_1d718c;
        case 0x1d71a4u: goto label_1d71a4;
        case 0x1d71c8u: goto label_1d71c8;
        case 0x1d71dcu: goto label_1d71dc;
        case 0x1d71e8u: goto label_1d71e8;
        case 0x1d71f8u: goto label_1d71f8;
        case 0x1d7238u: goto label_1d7238;
        case 0x1d724cu: goto label_1d724c;
        case 0x1d72a4u: goto label_1d72a4;
        case 0x1d72b0u: goto label_1d72b0;
        case 0x1d72b8u: goto label_1d72b8;
        case 0x1d72c0u: goto label_1d72c0;
        case 0x1d72c8u: goto label_1d72c8;
        default: break;
    }

    ctx->pc = 0x1d6c40u;

    // 0x1d6c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d6c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d6c44: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1d6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1d6c48: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1d6c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1d6c4c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d6c50: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1d6c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1d6c54: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1d6c54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6c58: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1d6c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1d6c5c: 0x24422508  addiu       $v0, $v0, 0x2508
    ctx->pc = 0x1d6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
    // 0x1d6c60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d6c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d6c64: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d6c64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6c68: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1d6c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1d6c6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1d6c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1d6c70: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1d6c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1d6c74: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1d6c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1d6c78: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1d6c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1d6c7c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1d6c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1d6c80: 0x8c64bd70  lw          $a0, -0x4290($v1)
    ctx->pc = 0x1d6c80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x1d6c84: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d6c88: 0x905358ec  lbu         $s3, 0x58EC($v0)
    ctx->pc = 0x1d6c88u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)FAST_READ8(0x4C7DF4u));
    // 0x1d6c8c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x1d6c8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6c90: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6C90u;
    {
        const bool branch_taken_0x1d6c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C90u;
        // 0x1d6c94: 0xac609174  sw          $zero, -0x6E8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294938996), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c90) {
            ctx->pc = 0x1D6CA4u;
            goto label_1d6ca4;
        }
    }
    ctx->pc = 0x1D6C98u;
    // 0x1d6c98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d6c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6c9c: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6C9Cu;
    {
        const bool branch_taken_0x1d6c9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D6CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C9Cu;
        // 0x1d6ca0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c9c) {
            ctx->pc = 0x1D6CC4u;
            goto label_1d6cc4;
        }
    }
    ctx->pc = 0x1D6CA4u;
label_1d6ca4:
    // 0x1d6ca4: 0xc0a223c  jal         func_2888F0
    ctx->pc = 0x1D6CA4u;
    SET_GPR_U32(ctx, 31, 0x1D6CACu);
    ctx->pc = 0x2888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888F0u, 0x1D6CA4u, 0x1D6CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CACu;
label_1d6cac:
    // 0x1d6cac: 0x144000cc  bnez        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x1D6CACu;
    {
        const bool branch_taken_0x1d6cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CACu;
        // 0x1d6cb0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6cac) {
            ctx->pc = 0x1D6FE0u;
            goto label_1d6fe0;
        }
    }
    ctx->pc = 0x1D6CB4u;
    // 0x1d6cb4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d6cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d6cb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6cbc: 0xac62a438  sw          $v0, -0x5BC8($v1)
    ctx->pc = 0x1d6cbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FA438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA438u, _value); } while (0);
    // 0x1d6cc0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1d6cc4:
    // 0x1d6cc4: 0x9062bd74  lbu         $v0, -0x428C($v1)
    ctx->pc = 0x1d6cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950260)));
    // 0x1d6cc8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D6CC8u;
    {
        const bool branch_taken_0x1d6cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CC8u;
        // 0x1d6ccc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6cc8) {
            ctx->pc = 0x1D6D08u;
            goto label_1d6d08;
        }
    }
    ctx->pc = 0x1D6CD0u;
    // 0x1d6cd0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1d6cd4: 0xa060bd74  sb          $zero, -0x428C($v1)
    ctx->pc = 0x1d6cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950260), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d6cd8: 0x24849b28  addiu       $a0, $a0, -0x64D8
    ctx->pc = 0x1d6cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    // 0x1d6cdc: 0xc07fafc  jal         func_1FEBF0
    ctx->pc = 0x1D6CDCu;
    SET_GPR_U32(ctx, 31, 0x1D6CE4u);
    ctx->pc = 0x1D6CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CDCu;
    // 0x1d6ce0: 0xac40a438  sw          $zero, -0x5BC8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943800), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEBF0u, 0x1D6CDCu, 0x1D6CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CE4u;
label_1d6ce4:
    // 0x1d6ce4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d6ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1d6ce8: 0xc07f6e8  jal         func_1FDBA0
    ctx->pc = 0x1D6CE8u;
    SET_GPR_U32(ctx, 31, 0x1D6CF0u);
    ctx->pc = 0x1D6CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CE8u;
    // 0x1d6cec: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDBA0u, 0x1D6CE8u, 0x1D6CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CF0u;
label_1d6cf0:
    // 0x1d6cf0: 0xc0a2306  jal         func_288C18
    ctx->pc = 0x1D6CF0u;
    SET_GPR_U32(ctx, 31, 0x1D6CF8u);
    ctx->pc = 0x1D6CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CF0u;
    // 0x1d6cf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x1D6CF0u, 0x1D6CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CF8u;
label_1d6cf8:
    // 0x1d6cf8: 0xc0a0408  jal         func_281020
    ctx->pc = 0x1D6CF8u;
    SET_GPR_U32(ctx, 31, 0x1D6D00u);
    ctx->pc = 0x281020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281020u, 0x1D6CF8u, 0x1D6D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6D00u;
label_1d6d00:
    // 0x1d6d00: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x1D6D00u;
    {
        const bool branch_taken_0x1d6d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D00u;
        // 0x1d6d04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d00) {
            ctx->pc = 0x1D72D8u;
            goto label_1d72d8;
        }
    }
    ctx->pc = 0x1D6D08u;
label_1d6d08:
    // 0x1d6d08: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1d6d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1d6d0c: 0x8c43a320  lw          $v1, -0x5CE0($v0)
    ctx->pc = 0x1d6d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x66A320u));
    // 0x1d6d10: 0x14600118  bnez        $v1, . + 4 + (0x118 << 2)
    ctx->pc = 0x1D6D10u;
    {
        const bool branch_taken_0x1d6d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D10u;
        // 0x1d6d14: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d10) {
            ctx->pc = 0x1D7174u;
            goto label_1d7174;
        }
    }
    ctx->pc = 0x1D6D18u;
    // 0x1d6d18: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d6d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d6d1c: 0x8c519160  lw          $s1, -0x6EA0($v0)
    ctx->pc = 0x1d6d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3F9160u));
    // 0x1d6d20: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d6d20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d24: 0xc0a1ac6  jal         func_286B18
    ctx->pc = 0x1D6D24u;
    SET_GPR_U32(ctx, 31, 0x1D6D2Cu);
    ctx->pc = 0x1D6D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6D24u;
    // 0x1d6d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B18u, 0x1D6D24u, 0x1D6D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6D2Cu;
label_1d6d2c:
    // 0x1d6d2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d6d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d30: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1d6d30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1d6d34: 0x8cc2a438  lw          $v0, -0x5BC8($a2)
    ctx->pc = 0x1d6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA438u));
    // 0x1d6d38: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1D6D38u;
    {
        const bool branch_taken_0x1d6d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D38u;
        // 0x1d6d3c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d38) {
            ctx->pc = 0x1D6E54u;
            goto label_1d6e54;
        }
    }
    ctx->pc = 0x1D6D40u;
    // 0x1d6d40: 0x8c629178  lw          $v0, -0x6E88($v1)
    ctx->pc = 0x1d6d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939000)));
    // 0x1d6d44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6D44u;
    {
        const bool branch_taken_0x1d6d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D44u;
        // 0x1d6d48: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d44) {
            ctx->pc = 0x1D6D58u;
            goto label_1d6d58;
        }
    }
    ctx->pc = 0x1D6D4Cu;
    // 0x1d6d4c: 0xac609178  sw          $zero, -0x6E88($v1)
    ctx->pc = 0x1d6d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939000), GPR_U32(ctx, 0));
    // 0x1d6d50: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x1D6D50u;
    {
        const bool branch_taken_0x1d6d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D50u;
        // 0x1d6d54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d50) {
            ctx->pc = 0x1D6FE8u;
            goto label_1d6fe8;
        }
    }
    ctx->pc = 0x1D6D58u;
label_1d6d58:
    // 0x1d6d58: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x1d6d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d6d5c: 0x245090e0  addiu       $s0, $v0, -0x6F20
    ctx->pc = 0x1d6d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938848));
    // 0x1d6d60: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d6d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d6d64: 0x64880b  movn        $s1, $v1, $a0
    ctx->pc = 0x1d6d64u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1d6d68: 0xacc0a438  sw          $zero, -0x5BC8($a2)
    ctx->pc = 0x1d6d68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943800), GPR_U32(ctx, 0));
    // 0x1d6d6c: 0x24a5d688  addiu       $a1, $a1, -0x2978
    ctx->pc = 0x1d6d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956680));
    // 0x1d6d70: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x1D6D70u;
    SET_GPR_U32(ctx, 31, 0x1D6D78u);
    ctx->pc = 0x1D6D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6D70u;
    // 0x1d6d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x1D6D70u, 0x1D6D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6D78u;
label_1d6d78:
    // 0x1d6d78: 0x10400123  beqz        $v0, . + 4 + (0x123 << 2)
    ctx->pc = 0x1D6D78u;
    {
        const bool branch_taken_0x1d6d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D78u;
        // 0x1d6d7c: 0x27d22508  addiu       $s2, $fp, 0x2508 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 9480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d78) {
            ctx->pc = 0x1D7208u;
            goto label_1d7208;
        }
    }
    ctx->pc = 0x1D6D80u;
    // 0x1d6d80: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d6d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d6d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d88: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x1D6D88u;
    SET_GPR_U32(ctx, 31, 0x1D6D90u);
    ctx->pc = 0x1D6D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6D88u;
    // 0x1d6d8c: 0x24a5d698  addiu       $a1, $a1, -0x2968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x1D6D88u, 0x1D6D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6D90u;
label_1d6d90:
    // 0x1d6d90: 0x1040011c  beqz        $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x1D6D90u;
    {
        const bool branch_taken_0x1d6d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D90u;
        // 0x1d6d94: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d90) {
            ctx->pc = 0x1D7204u;
            goto label_1d7204;
        }
    }
    ctx->pc = 0x1D6D98u;
    // 0x1d6d98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d6d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6d9c: 0x8e509164  lw          $s0, -0x6E9C($s2)
    ctx->pc = 0x1d6d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294938980)));
    // 0x1d6da0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6DA0u;
    {
        const bool branch_taken_0x1d6da0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d6da0) {
            ctx->pc = 0x1D6DB8u;
            goto label_1d6db8;
        }
    }
    ctx->pc = 0x1D6DA8u;
    // 0x1d6da8: 0xc0a050a  jal         func_281428
    ctx->pc = 0x1D6DA8u;
    SET_GPR_U32(ctx, 31, 0x1D6DB0u);
    ctx->pc = 0x1D6DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6DA8u;
    // 0x1d6dac: 0x26240001  addiu       $a0, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281428u, 0x1D6DA8u, 0x1D6DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6DB0u;
label_1d6db0:
    // 0x1d6db0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1D6DB0u;
    {
        const bool branch_taken_0x1d6db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DB0u;
        // 0x1d6db4: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6db0) {
            ctx->pc = 0x1D6E30u;
            goto label_1d6e30;
        }
    }
    ctx->pc = 0x1D6DB8u;
label_1d6db8:
    // 0x1d6db8: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D6DB8u;
    {
        const bool branch_taken_0x1d6db8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6db8) {
            ctx->pc = 0x1D6E1Cu;
            goto label_1d6e1c;
        }
    }
    ctx->pc = 0x1D6DC0u;
    // 0x1d6dc0: 0xc0a2306  jal         func_288C18
    ctx->pc = 0x1D6DC0u;
    SET_GPR_U32(ctx, 31, 0x1D6DC8u);
    ctx->pc = 0x1D6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6DC0u;
    // 0x1d6dc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x1D6DC0u, 0x1D6DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6DC8u;
label_1d6dc8:
    // 0x1d6dc8: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1D6DC8u;
    SET_GPR_U32(ctx, 31, 0x1D6DD0u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D6DC8u, 0x1D6DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6DD0u;
label_1d6dd0:
    // 0x1d6dd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d6dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6dd4: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x1D6DD4u;
    SET_GPR_U32(ctx, 31, 0x1D6DDCu);
    ctx->pc = 0x1D6DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6DD4u;
    // 0x1d6dd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x1D6DD4u, 0x1D6DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6DDCu;
label_1d6ddc:
    // 0x1d6ddc: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1D6DDCu;
    SET_GPR_U32(ctx, 31, 0x1D6DE4u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D6DDCu, 0x1D6DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6DE4u;
label_1d6de4:
    // 0x1d6de4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d6de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d6de8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d6de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6dec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6df0: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x1D6DF0u;
    SET_GPR_U32(ctx, 31, 0x1D6DF8u);
    ctx->pc = 0x1D6DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6DF0u;
    // 0x1d6df4: 0x24a5d6a8  addiu       $a1, $a1, -0x2958 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1D6DF0u, 0x1D6DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6DF8u;
label_1d6df8:
    // 0x1d6df8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d6df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e00: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x1D6E00u;
    SET_GPR_U32(ctx, 31, 0x1D6E08u);
    ctx->pc = 0x1D6E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E00u;
    // 0x1d6e04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x1D6E00u, 0x1D6E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E08u;
label_1d6e08:
    // 0x1d6e08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d6e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e0c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1D6E0Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E14u);
    ctx->pc = 0x1D6E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E0Cu;
    // 0x1d6e10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1D6E0Cu, 0x1D6E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E14u;
label_1d6e14:
    // 0x1d6e14: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x1D6E14u;
    {
        const bool branch_taken_0x1d6e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E14u;
        // 0x1d6e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e14) {
            ctx->pc = 0x1D72D8u;
            goto label_1d72d8;
        }
    }
    ctx->pc = 0x1D6E1Cu;
label_1d6e1c:
    // 0x1d6e1c: 0xc0a050a  jal         func_281428
    ctx->pc = 0x1D6E1Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E24u);
    ctx->pc = 0x1D6E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E1Cu;
    // 0x1d6e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281428u, 0x1D6E1Cu, 0x1D6E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E24u;
label_1d6e24:
    // 0x1d6e24: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1d6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d6e28: 0xae429164  sw          $v0, -0x6E9C($s2)
    ctx->pc = 0x1d6e28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294938980), GPR_U32(ctx, 2));
    // 0x1d6e2c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d6e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_1d6e30:
    // 0x1d6e30: 0xc07fafc  jal         func_1FEBF0
    ctx->pc = 0x1D6E30u;
    SET_GPR_U32(ctx, 31, 0x1D6E38u);
    ctx->pc = 0x1D6E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E30u;
    // 0x1d6e34: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEBF0u, 0x1D6E30u, 0x1D6E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E38u;
label_1d6e38:
    // 0x1d6e38: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d6e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1d6e3c: 0xc07f6e8  jal         func_1FDBA0
    ctx->pc = 0x1D6E3Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E44u);
    ctx->pc = 0x1D6E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E3Cu;
    // 0x1d6e40: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDBA0u, 0x1D6E3Cu, 0x1D6E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E44u;
label_1d6e44:
    // 0x1d6e44: 0xc0a2306  jal         func_288C18
    ctx->pc = 0x1D6E44u;
    SET_GPR_U32(ctx, 31, 0x1D6E4Cu);
    ctx->pc = 0x1D6E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E44u;
    // 0x1d6e48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x1D6E44u, 0x1D6E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E4Cu;
label_1d6e4c:
    // 0x1d6e4c: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x1D6E4Cu;
    {
        const bool branch_taken_0x1d6e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E4Cu;
        // 0x1d6e50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e4c) {
            ctx->pc = 0x1D72D8u;
            goto label_1d72d8;
        }
    }
    ctx->pc = 0x1D6E54u;
label_1d6e54:
    // 0x1d6e54: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1d6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1d6e58: 0x8c622b34  lw          $v0, 0x2B34($v1)
    ctx->pc = 0x1d6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B34u));
    // 0x1d6e5c: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x1d6e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1d6e60: 0x144000c4  bnez        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x1D6E60u;
    {
        const bool branch_taken_0x1d6e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E60u;
        // 0x1d6e64: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e60) {
            ctx->pc = 0x1D7174u;
            goto label_1d7174;
        }
    }
    ctx->pc = 0x1D6E68u;
    // 0x1d6e68: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d6e6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d6e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e70: 0x8c43aa7c  lw          $v1, -0x5584($v0)
    ctx->pc = 0x1d6e70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAA7Cu));
    // 0x1d6e74: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d6e74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d6e78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e7c: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D6E7Cu;
    {
        const bool branch_taken_0x1d6e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E7Cu;
        // 0x1d6e80: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e7c) {
            ctx->pc = 0x1D6F04u;
            goto label_1d6f04;
        }
    }
    ctx->pc = 0x1D6E84u;
    // 0x1d6e84: 0xc0a1f58  jal         func_287D60
    ctx->pc = 0x1D6E84u;
    SET_GPR_U32(ctx, 31, 0x1D6E8Cu);
    ctx->pc = 0x287D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287D60u, 0x1D6E84u, 0x1D6E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E8Cu;
label_1d6e8c:
    // 0x1d6e8c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D6E8Cu;
    {
        const bool branch_taken_0x1d6e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e8c) {
            ctx->pc = 0x1D6F04u;
            goto label_1d6f04;
        }
    }
    ctx->pc = 0x1D6E94u;
    // 0x1d6e94: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1D6E94u;
    SET_GPR_U32(ctx, 31, 0x1D6E9Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D6E94u, 0x1D6E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E9Cu;
label_1d6e9c:
    // 0x1d6e9c: 0x904300f4  lbu         $v1, 0xF4($v0)
    ctx->pc = 0x1d6e9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1d6ea0: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D6EA0u;
    {
        const bool branch_taken_0x1d6ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6ea0) {
            ctx->pc = 0x1D6F04u;
            goto label_1d6f04;
        }
    }
    ctx->pc = 0x1D6EA8u;
    // 0x1d6ea8: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1D6EA8u;
    SET_GPR_U32(ctx, 31, 0x1D6EB0u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D6EA8u, 0x1D6EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6EB0u;
label_1d6eb0:
    // 0x1d6eb0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d6eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d6eb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6eb8: 0x24a5d6b8  addiu       $a1, $a1, -0x2948
    ctx->pc = 0x1d6eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956728));
    // 0x1d6ebc: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x1D6EBCu;
    SET_GPR_U32(ctx, 31, 0x1D6EC4u);
    ctx->pc = 0x1D6EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6EBCu;
    // 0x1d6ec0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1D6EBCu, 0x1D6EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6EC4u;
label_1d6ec4:
    // 0x1d6ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ec8: 0xc0a71a4  jal         func_29C690
    ctx->pc = 0x1D6EC8u;
    SET_GPR_U32(ctx, 31, 0x1D6ED0u);
    ctx->pc = 0x1D6ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6EC8u;
    // 0x1d6ecc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C690u, 0x1D6EC8u, 0x1D6ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6ED0u;
label_1d6ed0:
    // 0x1d6ed0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6ED0u;
    {
        const bool branch_taken_0x1d6ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6ed0) {
            ctx->pc = 0x1D6ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6ED0u;
            // 0x1d6ed4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6EF0u;
            goto label_1d6ef0;
        }
    }
    ctx->pc = 0x1D6ED8u;
    // 0x1d6ed8: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1D6ED8u;
    SET_GPR_U32(ctx, 31, 0x1D6EE0u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D6ED8u, 0x1D6EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6EE0u;
label_1d6ee0:
    // 0x1d6ee0: 0x904300f4  lbu         $v1, 0xF4($v0)
    ctx->pc = 0x1d6ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1d6ee4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6EE4u;
    {
        const bool branch_taken_0x1d6ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EE4u;
        // 0x1d6ee8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ee4) {
            ctx->pc = 0x1D6EF4u;
            goto label_1d6ef4;
        }
    }
    ctx->pc = 0x1D6EECu;
    // 0x1d6eec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1d6eecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6ef0:
    // 0x1d6ef0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d6ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d6ef4:
    // 0x1d6ef4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1D6EF4u;
    SET_GPR_U32(ctx, 31, 0x1D6EFCu);
    ctx->pc = 0x1D6EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6EF4u;
    // 0x1d6ef8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1D6EF4u, 0x1D6EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6EFCu;
label_1d6efc:
    // 0x1d6efc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1D6EFCu;
    {
        const bool branch_taken_0x1d6efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6efc) {
            ctx->pc = 0x1D6FC0u;
            goto label_1d6fc0;
        }
    }
    ctx->pc = 0x1D6F04u;
label_1d6f04:
    // 0x1d6f04: 0xc0a1f92  jal         func_287E48
    ctx->pc = 0x1D6F04u;
    SET_GPR_U32(ctx, 31, 0x1D6F0Cu);
    ctx->pc = 0x287E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287E48u, 0x1D6F04u, 0x1D6F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F0Cu;
label_1d6f0c:
    // 0x1d6f0c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D6F0Cu;
    {
        const bool branch_taken_0x1d6f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F0Cu;
        // 0x1d6f10: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f0c) {
            ctx->pc = 0x1D6F74u;
            goto label_1d6f74;
        }
    }
    ctx->pc = 0x1D6F14u;
    // 0x1d6f14: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1D6F14u;
    SET_GPR_U32(ctx, 31, 0x1D6F1Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D6F14u, 0x1D6F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F1Cu;
label_1d6f1c:
    // 0x1d6f1c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d6f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d6f20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d6f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6f24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6f28: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x1D6F28u;
    SET_GPR_U32(ctx, 31, 0x1D6F30u);
    ctx->pc = 0x1D6F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6F28u;
    // 0x1d6f2c: 0x24a5d6d0  addiu       $a1, $a1, -0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1D6F28u, 0x1D6F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F30u;
label_1d6f30:
    // 0x1d6f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6f34: 0xc0a7196  jal         func_29C658
    ctx->pc = 0x1D6F34u;
    SET_GPR_U32(ctx, 31, 0x1D6F3Cu);
    ctx->pc = 0x1D6F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6F34u;
    // 0x1d6f38: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C658u, 0x1D6F34u, 0x1D6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F3Cu;
label_1d6f3c:
    // 0x1d6f3c: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x1d6f3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d6f40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d6f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6f44: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1D6F44u;
    SET_GPR_U32(ctx, 31, 0x1D6F4Cu);
    ctx->pc = 0x1D6F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6F44u;
    // 0x1d6f48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1D6F44u, 0x1D6F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F4Cu;
label_1d6f4c:
    // 0x1d6f4c: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x1d6f4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1d6f50: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6F50u;
    {
        const bool branch_taken_0x1d6f50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F50u;
        // 0x1d6f54: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f50) {
            ctx->pc = 0x1D6F74u;
            goto label_1d6f74;
        }
    }
    ctx->pc = 0x1D6F58u;
    // 0x1d6f58: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1D6F58u;
    SET_GPR_U32(ctx, 31, 0x1D6F60u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D6F58u, 0x1D6F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F60u;
label_1d6f60:
    // 0x1d6f60: 0x904300f4  lbu         $v1, 0xF4($v0)
    ctx->pc = 0x1d6f60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1d6f64: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D6F64u;
    {
        const bool branch_taken_0x1d6f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6f64) {
            ctx->pc = 0x1D6F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6F64u;
            // 0x1d6f68: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6FC0u;
            goto label_1d6fc0;
        }
    }
    ctx->pc = 0x1D6F6Cu;
    // 0x1d6f6c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1D6F6Cu;
    {
        const bool branch_taken_0x1d6f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F6Cu;
        // 0x1d6f70: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f6c) {
            ctx->pc = 0x1D6FC0u;
            goto label_1d6fc0;
        }
    }
    ctx->pc = 0x1D6F74u;
label_1d6f74:
    // 0x1d6f74: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x1d6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
    // 0x1d6f78: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D6F78u;
    {
        const bool branch_taken_0x1d6f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F78u;
        // 0x1d6f7c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f78) {
            ctx->pc = 0x1D6FA4u;
            goto label_1d6fa4;
        }
    }
    ctx->pc = 0x1D6F80u;
    // 0x1d6f80: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x1d6f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x1d6f84: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d6f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1d6f88: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d6f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1d6f8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6F8Cu;
    {
        const bool branch_taken_0x1d6f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F8Cu;
        // 0x1d6f90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f8c) {
            ctx->pc = 0x1D6FA8u;
            goto label_1d6fa8;
        }
    }
    ctx->pc = 0x1D6F94u;
    // 0x1d6f94: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1d6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d6f98: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d6f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1d6f9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6F9Cu;
    {
        const bool branch_taken_0x1d6f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F9Cu;
        // 0x1d6fa0: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f9c) {
            ctx->pc = 0x1D6FA8u;
            goto label_1d6fa8;
        }
    }
    ctx->pc = 0x1D6FA4u;
label_1d6fa4:
    // 0x1d6fa4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d6fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6fa8:
    // 0x1d6fa8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6FA8u;
    {
        const bool branch_taken_0x1d6fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6fa8) {
            ctx->pc = 0x1D6FC0u;
            goto label_1d6fc0;
        }
    }
    ctx->pc = 0x1D6FB0u;
    // 0x1d6fb0: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1D6FB0u;
    SET_GPR_U32(ctx, 31, 0x1D6FB8u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D6FB0u, 0x1D6FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6FB8u;
label_1d6fb8:
    // 0x1d6fb8: 0x904300f4  lbu         $v1, 0xF4($v0)
    ctx->pc = 0x1d6fb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1d6fbc: 0x2c720001  sltiu       $s2, $v1, 0x1
    ctx->pc = 0x1d6fbcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d6fc0:
    // 0x1d6fc0: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6FC0u;
    {
        const bool branch_taken_0x1d6fc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6fc0) {
            ctx->pc = 0x1D6FD0u;
            goto label_1d6fd0;
        }
    }
    ctx->pc = 0x1D6FC8u;
    // 0x1d6fc8: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D6FC8u;
    {
        const bool branch_taken_0x1d6fc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6fc8) {
            ctx->pc = 0x1D7000u;
            goto label_1d7000;
        }
    }
    ctx->pc = 0x1D6FD0u;
label_1d6fd0:
    // 0x1d6fd0: 0xc0a223c  jal         func_2888F0
    ctx->pc = 0x1D6FD0u;
    SET_GPR_U32(ctx, 31, 0x1D6FD8u);
    ctx->pc = 0x2888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888F0u, 0x1D6FD0u, 0x1D6FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6FD8u;
label_1d6fd8:
    // 0x1d6fd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6FD8u;
    {
        const bool branch_taken_0x1d6fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FD8u;
        // 0x1d6fdc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fd8) {
            ctx->pc = 0x1D7000u;
            goto label_1d7000;
        }
    }
    ctx->pc = 0x1D6FE0u;
label_1d6fe0:
    // 0x1d6fe0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d6fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6fe4: 0xac40a4d8  sw          $zero, -0x5B28($v0)
    ctx->pc = 0x1d6fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943960), GPR_U32(ctx, 0));
label_1d6fe8:
    // 0x1d6fe8: 0xc0a2306  jal         func_288C18
    ctx->pc = 0x1D6FE8u;
    SET_GPR_U32(ctx, 31, 0x1D6FF0u);
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x1D6FE8u, 0x1D6FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6FF0u;
label_1d6ff0:
    // 0x1d6ff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d6ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6ff4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d6ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d6ff8: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1D6FF8u;
    {
        const bool branch_taken_0x1d6ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FF8u;
        // 0x1d6ffc: 0xae839174  sw          $v1, -0x6E8C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294938996), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ff8) {
            ctx->pc = 0x1D72D8u;
            goto label_1d72d8;
        }
    }
    ctx->pc = 0x1D7000u;
label_1d7000:
    // 0x1d7000: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7000u;
    {
        const bool branch_taken_0x1d7000 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7000u;
        // 0x1d7004: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7000) {
            ctx->pc = 0x1D7020u;
            goto label_1d7020;
        }
    }
    ctx->pc = 0x1D7008u;
    // 0x1d7008: 0xc0abe46  jal         func_2AF918
    ctx->pc = 0x1D7008u;
    SET_GPR_U32(ctx, 31, 0x1D7010u);
    ctx->pc = 0x1D700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7008u;
    // 0x1d700c: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF918u, 0x1D7008u, 0x1D7010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7010u;
label_1d7010:
    // 0x1d7010: 0xc0a2306  jal         func_288C18
    ctx->pc = 0x1D7010u;
    SET_GPR_U32(ctx, 31, 0x1D7018u);
    ctx->pc = 0x1D7014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7010u;
    // 0x1d7014: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x1D7010u, 0x1D7018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7018u;
label_1d7018:
    // 0x1d7018: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1D7018u;
    {
        const bool branch_taken_0x1d7018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7018u;
        // 0x1d701c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7018) {
            ctx->pc = 0x1D7174u;
            goto label_1d7174;
        }
    }
    ctx->pc = 0x1D7020u;
label_1d7020:
    // 0x1d7020: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1D7020u;
    {
        const bool branch_taken_0x1d7020 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7020) {
            ctx->pc = 0x1D70E8u;
            goto label_1d70e8;
        }
    }
    ctx->pc = 0x1D7028u;
    // 0x1d7028: 0xc0abe46  jal         func_2AF918
    ctx->pc = 0x1D7028u;
    SET_GPR_U32(ctx, 31, 0x1D7030u);
    ctx->pc = 0x1D702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7028u;
    // 0x1d702c: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF918u, 0x1D7028u, 0x1D7030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7030u;
label_1d7030:
    // 0x1d7030: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d7030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1d7034: 0xc07fafc  jal         func_1FEBF0
    ctx->pc = 0x1D7034u;
    SET_GPR_U32(ctx, 31, 0x1D703Cu);
    ctx->pc = 0x1D7038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7034u;
    // 0x1d7038: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEBF0u, 0x1D7034u, 0x1D703Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D703Cu;
label_1d703c:
    // 0x1d703c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d703cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1d7040: 0xc07f6e8  jal         func_1FDBA0
    ctx->pc = 0x1D7040u;
    SET_GPR_U32(ctx, 31, 0x1D7048u);
    ctx->pc = 0x1D7044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7040u;
    // 0x1d7044: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDBA0u, 0x1D7040u, 0x1D7048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7048u;
label_1d7048:
    // 0x1d7048: 0xc0a2306  jal         func_288C18
    ctx->pc = 0x1D7048u;
    SET_GPR_U32(ctx, 31, 0x1D7050u);
    ctx->pc = 0x1D704Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7048u;
    // 0x1d704c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x1D7048u, 0x1D7050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7050u;
label_1d7050:
    // 0x1d7050: 0x27c52508  addiu       $a1, $fp, 0x2508
    ctx->pc = 0x1d7050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 9480));
    // 0x1d7054: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d7054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7058: 0x90a358ec  lbu         $v1, 0x58EC($a1)
    ctx->pc = 0x1d7058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 22764)));
    // 0x1d705c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D705Cu;
    {
        const bool branch_taken_0x1d705c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D705Cu;
        // 0x1d7060: 0xaca20094  sw          $v0, 0x94($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d705c) {
            ctx->pc = 0x1D707Cu;
            goto label_1d707c;
        }
    }
    ctx->pc = 0x1D7064u;
    // 0x1d7064: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d7064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d7068: 0x8ea49160  lw          $a0, -0x6EA0($s5)
    ctx->pc = 0x1d7068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938976)));
    // 0x1d706c: 0x8c439164  lw          $v1, -0x6E9C($v0)
    ctx->pc = 0x1d706cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9164u));
    // 0x1d7070: 0xaca40090  sw          $a0, 0x90($a1)
    ctx->pc = 0x1d7070u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 4));
    // 0x1d7074: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d7074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d7078: 0xaca3008c  sw          $v1, 0x8C($a1)
    ctx->pc = 0x1d7078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 3));
label_1d707c:
    // 0x1d707c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1D707Cu;
    SET_GPR_U32(ctx, 31, 0x1D7084u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D707Cu, 0x1D7084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7084u;
label_1d7084:
    // 0x1d7084: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d7084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7088: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x1D7088u;
    SET_GPR_U32(ctx, 31, 0x1D7090u);
    ctx->pc = 0x1D708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7088u;
    // 0x1d708c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x1D7088u, 0x1D7090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7090u;
label_1d7090:
    // 0x1d7090: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1D7090u;
    SET_GPR_U32(ctx, 31, 0x1D7098u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D7090u, 0x1D7098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7098u;
label_1d7098:
    // 0x1d7098: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d7098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d709c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d709cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d70a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70a4: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x1D70A4u;
    SET_GPR_U32(ctx, 31, 0x1D70ACu);
    ctx->pc = 0x1D70A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70A4u;
    // 0x1d70a8: 0x24a5d6e8  addiu       $a1, $a1, -0x2918 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1D70A4u, 0x1D70ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70ACu;
label_1d70ac:
    // 0x1d70ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d70acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70b4: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x1D70B4u;
    SET_GPR_U32(ctx, 31, 0x1D70BCu);
    ctx->pc = 0x1D70B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70B4u;
    // 0x1d70b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x1D70B4u, 0x1D70BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70BCu;
label_1d70bc:
    // 0x1d70bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d70bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70c0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1D70C0u;
    SET_GPR_U32(ctx, 31, 0x1D70C8u);
    ctx->pc = 0x1D70C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70C0u;
    // 0x1d70c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1D70C0u, 0x1D70C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70C8u;
label_1d70c8:
    // 0x1d70c8: 0x8ea39160  lw          $v1, -0x6EA0($s5)
    ctx->pc = 0x1d70c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938976)));
    // 0x1d70cc: 0x240203e6  addiu       $v0, $zero, 0x3E6
    ctx->pc = 0x1d70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 998));
    // 0x1d70d0: 0x14620081  bne         $v1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x1D70D0u;
    {
        const bool branch_taken_0x1d70d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D70D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70D0u;
        // 0x1d70d4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70d0) {
            ctx->pc = 0x1D72D8u;
            goto label_1d72d8;
        }
    }
    ctx->pc = 0x1D70D8u;
    // 0x1d70d8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d70dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d70e0: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1D70E0u;
    {
        const bool branch_taken_0x1d70e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70E0u;
        // 0x1d70e4: 0xac629178  sw          $v0, -0x6E88($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294939000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70e0) {
            ctx->pc = 0x1D72D4u;
            goto label_1d72d4;
        }
    }
    ctx->pc = 0x1D70E8u;
label_1d70e8:
    // 0x1d70e8: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D70E8u;
    {
        const bool branch_taken_0x1d70e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70E8u;
        // 0x1d70ec: 0x8ee2aa7c  lw          $v0, -0x5584($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70e8) {
            ctx->pc = 0x1D7170u;
            goto label_1d7170;
        }
    }
    ctx->pc = 0x1D70F0u;
    // 0x1d70f0: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1D70F0u;
    {
        const bool branch_taken_0x1d70f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D70F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70F0u;
        // 0x1d70f4: 0x27d22508  addiu       $s2, $fp, 0x2508 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 9480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70f0) {
            ctx->pc = 0x1D7208u;
            goto label_1d7208;
        }
    }
    ctx->pc = 0x1D70F8u;
    // 0x1d70f8: 0x8ea39160  lw          $v1, -0x6EA0($s5)
    ctx->pc = 0x1d70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938976)));
    // 0x1d70fc: 0x240203e6  addiu       $v0, $zero, 0x3E6
    ctx->pc = 0x1d70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 998));
    // 0x1d7100: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D7100u;
    {
        const bool branch_taken_0x1d7100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7100u;
        // 0x1d7104: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7100) {
            ctx->pc = 0x1D7174u;
            goto label_1d7174;
        }
    }
    ctx->pc = 0x1D7108u;
    // 0x1d7108: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x1d7108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x1d710c: 0xc0abe46  jal         func_2AF918
    ctx->pc = 0x1D710Cu;
    SET_GPR_U32(ctx, 31, 0x1D7114u);
    ctx->pc = 0x1D7110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D710Cu;
    // 0x1d7110: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF918u, 0x1D710Cu, 0x1D7114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7114u;
label_1d7114:
    // 0x1d7114: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1D7114u;
    SET_GPR_U32(ctx, 31, 0x1D711Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D7114u, 0x1D711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D711Cu;
label_1d711c:
    // 0x1d711c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d711cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d7120: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d7124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7128: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x1D7128u;
    SET_GPR_U32(ctx, 31, 0x1D7130u);
    ctx->pc = 0x1D712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7128u;
    // 0x1d712c: 0x24a5d6e8  addiu       $a1, $a1, -0x2918 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1D7128u, 0x1D7130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7130u;
label_1d7130:
    // 0x1d7130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7134: 0xc0a7196  jal         func_29C658
    ctx->pc = 0x1D7134u;
    SET_GPR_U32(ctx, 31, 0x1D713Cu);
    ctx->pc = 0x1D7138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7134u;
    // 0x1d7138: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C658u, 0x1D7134u, 0x1D713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D713Cu;
label_1d713c:
    // 0x1d713c: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x1d713cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d7140: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7144: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1D7144u;
    SET_GPR_U32(ctx, 31, 0x1D714Cu);
    ctx->pc = 0x1D7148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7144u;
    // 0x1d7148: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1D7144u, 0x1D714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D714Cu;
label_1d714c:
    // 0x1d714c: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x1d714cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1d7150: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7150u;
    {
        const bool branch_taken_0x1d7150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7150) {
            ctx->pc = 0x1D7168u;
            goto label_1d7168;
        }
    }
    ctx->pc = 0x1D7158u;
    // 0x1d7158: 0xc0a2306  jal         func_288C18
    ctx->pc = 0x1D7158u;
    SET_GPR_U32(ctx, 31, 0x1D7160u);
    ctx->pc = 0x1D715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7158u;
    // 0x1d715c: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x1D7158u, 0x1D7160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7160u;
label_1d7160:
    // 0x1d7160: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7160u;
    {
        const bool branch_taken_0x1d7160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7160u;
        // 0x1d7164: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7160) {
            ctx->pc = 0x1D7174u;
            goto label_1d7174;
        }
    }
    ctx->pc = 0x1D7168u;
label_1d7168:
    // 0x1d7168: 0xc0a2306  jal         func_288C18
    ctx->pc = 0x1D7168u;
    SET_GPR_U32(ctx, 31, 0x1D7170u);
    ctx->pc = 0x1D716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7168u;
    // 0x1d716c: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x1D7168u, 0x1D7170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7170u;
label_1d7170:
    // 0x1d7170: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1d7170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1d7174:
    // 0x1d7174: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d7174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7178: 0x8c512b38  lw          $s1, 0x2B38($v0)
    ctx->pc = 0x1d7178u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11064)));
    // 0x1d717c: 0x1223000c  beq         $s1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D717Cu;
    {
        const bool branch_taken_0x1d717c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D717Cu;
        // 0x1d7180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d717c) {
            ctx->pc = 0x1D71B0u;
            goto label_1d71b0;
        }
    }
    ctx->pc = 0x1D7184u;
    // 0x1d7184: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1D7184u;
    SET_GPR_U32(ctx, 31, 0x1D718Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D7184u, 0x1D718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D718Cu;
label_1d718c:
    // 0x1d718c: 0x904300f4  lbu         $v1, 0xF4($v0)
    ctx->pc = 0x1d718cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1d7190: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7190u;
    {
        const bool branch_taken_0x1d7190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7190u;
        // 0x1d7194: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7190) {
            ctx->pc = 0x1D719Cu;
            goto label_1d719c;
        }
    }
    ctx->pc = 0x1D7198u;
    // 0x1d7198: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d719c:
    // 0x1d719c: 0xc0a2306  jal         func_288C18
    ctx->pc = 0x1D719Cu;
    SET_GPR_U32(ctx, 31, 0x1D71A4u);
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x1D719Cu, 0x1D71A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71A4u;
label_1d71a4:
    // 0x1d71a4: 0x38420032  xori        $v0, $v0, 0x32
    ctx->pc = 0x1d71a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)50);
    // 0x1d71a8: 0x2c560001  sltiu       $s6, $v0, 0x1
    ctx->pc = 0x1d71a8u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d71ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d71acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d71b0:
    // 0x1d71b0: 0x16220049  bne         $s1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1D71B0u;
    {
        const bool branch_taken_0x1d71b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71B0u;
        // 0x1d71b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71b0) {
            ctx->pc = 0x1D72D8u;
            goto label_1d72d8;
        }
    }
    ctx->pc = 0x1D71B8u;
    // 0x1d71b8: 0x16c00045  bnez        $s6, . + 4 + (0x45 << 2)
    ctx->pc = 0x1D71B8u;
    {
        const bool branch_taken_0x1d71b8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71B8u;
        // 0x1d71bc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71b8) {
            ctx->pc = 0x1D72D0u;
            goto label_1d72d0;
        }
    }
    ctx->pc = 0x1D71C0u;
    // 0x1d71c0: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1D71C0u;
    SET_GPR_U32(ctx, 31, 0x1D71C8u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D71C0u, 0x1D71C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71C8u;
label_1d71c8:
    // 0x1d71c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d71c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d71cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d71ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d71d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71d4: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x1D71D4u;
    SET_GPR_U32(ctx, 31, 0x1D71DCu);
    ctx->pc = 0x1D71D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71D4u;
    // 0x1d71d8: 0x24a5d6e8  addiu       $a1, $a1, -0x2918 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1D71D4u, 0x1D71DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71DCu;
label_1d71dc:
    // 0x1d71dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d71dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71e0: 0xc0a7196  jal         func_29C658
    ctx->pc = 0x1D71E0u;
    SET_GPR_U32(ctx, 31, 0x1D71E8u);
    ctx->pc = 0x1D71E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71E0u;
    // 0x1d71e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C658u, 0x1D71E0u, 0x1D71E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71E8u;
label_1d71e8:
    // 0x1d71e8: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x1d71e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d71ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d71ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71f0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1D71F0u;
    SET_GPR_U32(ctx, 31, 0x1D71F8u);
    ctx->pc = 0x1D71F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71F0u;
    // 0x1d71f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1D71F0u, 0x1D71F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71F8u;
label_1d71f8:
    // 0x1d71f8: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x1d71f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1d71fc: 0x52000034  beql        $s0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1D71FCu;
    {
        const bool branch_taken_0x1d71fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d71fc) {
            ctx->pc = 0x1D7200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D71FCu;
            // 0x1d7200: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D72D0u;
            goto label_1d72d0;
        }
    }
    ctx->pc = 0x1D7204u;
label_1d7204:
    // 0x1d7204: 0x27d22508  addiu       $s2, $fp, 0x2508
    ctx->pc = 0x1d7204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 9480));
label_1d7208:
    // 0x1d7208: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1d7208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d720c: 0x8e500090  lw          $s0, 0x90($s2)
    ctx->pc = 0x1d720cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1d7210: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1d7210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1d7214: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x1d7214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1d7218: 0x24428f20  addiu       $v0, $v0, -0x70E0
    ctx->pc = 0x1d7218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938400));
    // 0x1d721c: 0x2048018  mult        $s0, $s0, $a0
    ctx->pc = 0x1d721cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1d7220: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d7220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d7224: 0x24a5d688  addiu       $a1, $a1, -0x2978
    ctx->pc = 0x1d7224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956680));
    // 0x1d7228: 0x28730000  slti        $s3, $v1, 0x0
    ctx->pc = 0x1d7228u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d722c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d722cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d7230: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x1D7230u;
    SET_GPR_U32(ctx, 31, 0x1D7238u);
    ctx->pc = 0x1D7234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7230u;
    // 0x1d7234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x1D7230u, 0x1D7238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7238u;
label_1d7238:
    // 0x1d7238: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d7238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d723c: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x1d723cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d7240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7244: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x1D7244u;
    SET_GPR_U32(ctx, 31, 0x1D724Cu);
    ctx->pc = 0x1D7248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7244u;
    // 0x1d7248: 0x24a5d698  addiu       $a1, $a1, -0x2968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x1D7244u, 0x1D724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D724Cu;
label_1d724c:
    // 0x1d724c: 0x16200012  bnez        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D724Cu;
    {
        const bool branch_taken_0x1d724c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D724Cu;
        // 0x1d7250: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d724c) {
            ctx->pc = 0x1D7298u;
            goto label_1d7298;
        }
    }
    ctx->pc = 0x1D7254u;
    // 0x1d7254: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7254u;
    {
        const bool branch_taken_0x1d7254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7254u;
        // 0x1d7258: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7254) {
            ctx->pc = 0x1D729Cu;
            goto label_1d729c;
        }
    }
    ctx->pc = 0x1D725Cu;
    // 0x1d725c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D725Cu;
    {
        const bool branch_taken_0x1d725c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D725Cu;
        // 0x1d7260: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d725c) {
            ctx->pc = 0x1D7280u;
            goto label_1d7280;
        }
    }
    ctx->pc = 0x1D7264u;
    // 0x1d7264: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1d7264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1d7268: 0x8c629160  lw          $v0, -0x6EA0($v1)
    ctx->pc = 0x1d7268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938976)));
    // 0x1d726c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1d726cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d7270: 0xae420090  sw          $v0, 0x90($s2)
    ctx->pc = 0x1d7270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    // 0x1d7274: 0xae44008c  sw          $a0, 0x8C($s2)
    ctx->pc = 0x1d7274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 4));
    // 0x1d7278: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7278u;
    {
        const bool branch_taken_0x1d7278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7278u;
        // 0x1d727c: 0xaca49164  sw          $a0, -0x6E9C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294938980), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7278) {
            ctx->pc = 0x1D7298u;
            goto label_1d7298;
        }
    }
    ctx->pc = 0x1D7280u;
label_1d7280:
    // 0x1d7280: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d7280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d7284: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1d7284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1d7288: 0x8c439160  lw          $v1, -0x6EA0($v0)
    ctx->pc = 0x1d7288u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9160u));
    // 0x1d728c: 0xae43008c  sw          $v1, 0x8C($s2)
    ctx->pc = 0x1d728cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
    // 0x1d7290: 0xac839164  sw          $v1, -0x6E9C($a0)
    ctx->pc = 0x1d7290u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F9164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9164u, _value); } while (0);
    // 0x1d7294: 0xae430090  sw          $v1, 0x90($s2)
    ctx->pc = 0x1d7294u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 3));
label_1d7298:
    // 0x1d7298: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d7298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_1d729c:
    // 0x1d729c: 0xc07fafc  jal         func_1FEBF0
    ctx->pc = 0x1D729Cu;
    SET_GPR_U32(ctx, 31, 0x1D72A4u);
    ctx->pc = 0x1D72A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D729Cu;
    // 0x1d72a0: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEBF0u, 0x1D729Cu, 0x1D72A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D72A4u;
label_1d72a4:
    // 0x1d72a4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d72a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1d72a8: 0xc07f6e8  jal         func_1FDBA0
    ctx->pc = 0x1D72A8u;
    SET_GPR_U32(ctx, 31, 0x1D72B0u);
    ctx->pc = 0x1D72ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D72A8u;
    // 0x1d72ac: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDBA0u, 0x1D72A8u, 0x1D72B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D72B0u;
label_1d72b0:
    // 0x1d72b0: 0xc0a2306  jal         func_288C18
    ctx->pc = 0x1D72B0u;
    SET_GPR_U32(ctx, 31, 0x1D72B8u);
    ctx->pc = 0x1D72B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D72B0u;
    // 0x1d72b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x1D72B0u, 0x1D72B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D72B8u;
label_1d72b8:
    // 0x1d72b8: 0xc0a040c  jal         func_281030
    ctx->pc = 0x1D72B8u;
    SET_GPR_U32(ctx, 31, 0x1D72C0u);
    ctx->pc = 0x281030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281030u, 0x1D72B8u, 0x1D72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D72C0u;
label_1d72c0:
    // 0x1d72c0: 0xc0b94ee  jal         func_2E53B8
    ctx->pc = 0x1D72C0u;
    SET_GPR_U32(ctx, 31, 0x1D72C8u);
    ctx->pc = 0x2E53B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E53B8u, 0x1D72C0u, 0x1D72C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D72C8u;
label_1d72c8:
    // 0x1d72c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D72C8u;
    {
        const bool branch_taken_0x1d72c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D72C8u;
        // 0x1d72cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d72c8) {
            ctx->pc = 0x1D72D8u;
            goto label_1d72d8;
        }
    }
    ctx->pc = 0x1D72D0u;
label_1d72d0:
    // 0x1d72d0: 0xac51a438  sw          $s1, -0x5BC8($v0)
    ctx->pc = 0x1d72d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943800), GPR_U32(ctx, 17));
label_1d72d4:
    // 0x1d72d4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d72d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d72d8:
    // 0x1d72d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d72d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d72dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d72dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d72e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d72e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d72e4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d72e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d72e8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d72e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d72ec: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1d72ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d72f0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1d72f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d72f4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1d72f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d72f8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1d72f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d72fc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1d72fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7300: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7300u;
        // 0x1d7304: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7308u;
}
