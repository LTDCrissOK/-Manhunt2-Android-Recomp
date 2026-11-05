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

// Function: sub_00395C08
// Address: 0x395c08 - 0x395da8
void sub_00395C08_0x395c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395C08_0x395c08");
#endif

    switch (ctx->pc) {
        case 0x395c54u: goto label_395c54;
        case 0x395cb4u: goto label_395cb4;
        case 0x395cc8u: goto label_395cc8;
        case 0x395cd8u: goto label_395cd8;
        case 0x395cf0u: goto label_395cf0;
        case 0x395d10u: goto label_395d10;
        case 0x395d58u: goto label_395d58;
        default: break;
    }

    ctx->pc = 0x395c08u;

    // 0x395c08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x395c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x395c0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x395c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x395c10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x395c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395c14: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x395c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x395c18: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x395c18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395c1c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x395c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x395c20: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x395c20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395c24: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x395c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x395c28: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x395c28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395c2c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x395c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x395c30: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x395c30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395c34: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x395c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x395c38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x395c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x395c3c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x395c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x395c40: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x395c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x395c44: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x395c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x395c48: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x395c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x395c4c: 0xc0e56be  jal         func_395AF8
    ctx->pc = 0x395C4Cu;
    SET_GPR_U32(ctx, 31, 0x395C54u);
    ctx->pc = 0x395C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395C4Cu;
    // 0x395c50: 0xafa80004  sw          $t0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395AF8u, 0x395C4Cu, 0x395C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395C54u;
label_395c54:
    // 0x395c54: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x395C54u;
    {
        const bool branch_taken_0x395c54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x395C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C54u;
        // 0x395c58: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c54) {
            ctx->pc = 0x395C88u;
            goto label_395c88;
        }
    }
    ctx->pc = 0x395C5Cu;
    // 0x395c5c: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x395C5Cu;
    {
        const bool branch_taken_0x395c5c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x395c5c) {
            ctx->pc = 0x395C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395C5Cu;
            // 0x395c60: 0xa2c00000  sb          $zero, 0x0($s6) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395C64u;
            goto label_395c64;
        }
    }
    ctx->pc = 0x395C64u;
label_395c64:
    // 0x395c64: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x395c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395c68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x395c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x395c6c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x395c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x395c70: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x395c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x395c74: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x395c74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x395c78: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x395c78u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x395c7c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x395C7Cu;
    {
        const bool branch_taken_0x395c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C7Cu;
        // 0x395c80: 0xafc30000  sw          $v1, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c7c) {
            ctx->pc = 0x395D78u;
            goto label_395d78;
        }
    }
    ctx->pc = 0x395C84u;
    // 0x395c84: 0x0  nop
    ctx->pc = 0x395c84u;
    // NOP
label_395c88:
    // 0x395c88: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x395c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x395c8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x395c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395c90: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x395c90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x395c94: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x395c94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x395c98: 0x8e73e548  lw          $s3, -0x1AB8($s3)
    ctx->pc = 0x395c98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960456)));
    // 0x395c9c: 0x8263000f  lb          $v1, 0xF($s3)
    ctx->pc = 0x395c9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
    // 0x395ca0: 0x54640017  bnel        $v1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x395CA0u;
    {
        const bool branch_taken_0x395ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x395ca0) {
            ctx->pc = 0x395CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395CA0u;
            // 0x395ca4: 0x96720118  lhu         $s2, 0x118($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395D00u;
            goto label_395d00;
        }
    }
    ctx->pc = 0x395CA8u;
    // 0x395ca8: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x395ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x395cac: 0xc0e578c  jal         func_395E30
    ctx->pc = 0x395CACu;
    SET_GPR_U32(ctx, 31, 0x395CB4u);
    ctx->pc = 0x395CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395CACu;
    // 0x395cb0: 0x2675011c  addiu       $s5, $s3, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E30u, 0x395CACu, 0x395CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395CB4u;
label_395cb4:
    // 0x395cb4: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x395CB4u;
    {
        const bool branch_taken_0x395cb4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x395CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CB4u;
        // 0x395cb8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395cb4) {
            ctx->pc = 0x395CE0u;
            goto label_395ce0;
        }
    }
    ctx->pc = 0x395CBCu;
    // 0x395cbc: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x395cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395cc0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x395cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395cc4: 0x0  nop
    ctx->pc = 0x395cc4u;
    // NOP
label_395cc8:
    // 0x395cc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x395cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x395ccc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x395cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x395cd0: 0xc0e578c  jal         func_395E30
    ctx->pc = 0x395CD0u;
    SET_GPR_U32(ctx, 31, 0x395CD8u);
    ctx->pc = 0x395CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395CD0u;
    // 0x395cd4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E30u, 0x395CD0u, 0x395CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395CD8u;
label_395cd8:
    // 0x395cd8: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x395CD8u;
    {
        const bool branch_taken_0x395cd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x395CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CD8u;
        // 0x395cdc: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395cd8) {
            ctx->pc = 0x395CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395cc8;
        }
    }
    ctx->pc = 0x395CE0u;
label_395ce0:
    // 0x395ce0: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x395ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x395ce4: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x395ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x395ce8: 0xc0e578c  jal         func_395E30
    ctx->pc = 0x395CE8u;
    SET_GPR_U32(ctx, 31, 0x395CF0u);
    ctx->pc = 0x395CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395CE8u;
    // 0x395cec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E30u, 0x395CE8u, 0x395CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395CF0u;
label_395cf0:
    // 0x395cf0: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x395cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x395cf4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x395cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x395cf8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x395CF8u;
    {
        const bool branch_taken_0x395cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CF8u;
        // 0x395cfc: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395cf8) {
            ctx->pc = 0x395D44u;
            goto label_395d44;
        }
    }
    ctx->pc = 0x395D00u;
label_395d00:
    // 0x395d00: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x395D00u;
    {
        const bool branch_taken_0x395d00 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x395D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D00u;
        // 0x395d04: 0x2665011a  addiu       $a1, $s3, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d00) {
            ctx->pc = 0x395D2Cu;
            goto label_395d2c;
        }
    }
    ctx->pc = 0x395D08u;
    // 0x395d08: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x395d08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395d0c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x395d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_395d10:
    // 0x395d10: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x395d10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395d14: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x395d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x395d18: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x395d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x395d1c: 0x0  nop
    ctx->pc = 0x395d1cu;
    // NOP
    // 0x395d20: 0x0  nop
    ctx->pc = 0x395d20u;
    // NOP
    // 0x395d24: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x395D24u;
    {
        const bool branch_taken_0x395d24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x395D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D24u;
        // 0x395d28: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d24) {
            ctx->pc = 0x395D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395d10;
        }
    }
    ctx->pc = 0x395D2Cu;
label_395d2c:
    // 0x395d2c: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x395d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x395d30: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x395d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x395d34: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x395d34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x395d38: 0x322c0  sll         $a0, $v1, 11
    ctx->pc = 0x395d38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x395d3c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x395d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x395d40: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x395d40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_395d44:
    // 0x395d44: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x395D44u;
    {
        const bool branch_taken_0x395d44 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x395D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D44u;
        // 0x395d48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d44) {
            ctx->pc = 0x395D58u;
            goto label_395d58;
        }
    }
    ctx->pc = 0x395D4Cu;
    // 0x395d4c: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x395d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x395d50: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x395D50u;
    SET_GPR_U32(ctx, 31, 0x395D58u);
    ctx->pc = 0x395D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395D50u;
    // 0x395d54: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x395D50u, 0x395D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395D58u;
label_395d58:
    // 0x395d58: 0x8e640110  lw          $a0, 0x110($s3)
    ctx->pc = 0x395d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x395d5c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x395d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395d60: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x395d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x395d64: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x395d64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x395d68: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x395d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x395d6c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x395d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x395d70: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x395d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x395d74: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x395d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_395d78:
    // 0x395d78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x395d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395d7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x395d7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x395d80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x395d80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x395d84: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x395d84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x395d88: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x395d88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x395d8c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x395d8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x395d90: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x395d90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x395d94: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x395d94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x395d98: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x395d98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x395d9c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x395d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x395da0: 0x3e00008  jr          $ra
    ctx->pc = 0x395DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DA0u;
        // 0x395da4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395DA8u;
}
