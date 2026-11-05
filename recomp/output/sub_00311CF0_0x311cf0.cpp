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

// Function: sub_00311CF0
// Address: 0x311cf0 - 0x311e58
void sub_00311CF0_0x311cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311CF0_0x311cf0");
#endif

    switch (ctx->pc) {
        case 0x311d30u: goto label_311d30;
        case 0x311d58u: goto label_311d58;
        case 0x311d98u: goto label_311d98;
        case 0x311dc4u: goto label_311dc4;
        case 0x311de0u: goto label_311de0;
        case 0x311e08u: goto label_311e08;
        case 0x311e10u: goto label_311e10;
        case 0x311e2cu: goto label_311e2c;
        default: break;
    }

    ctx->pc = 0x311cf0u;

    // 0x311cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x311cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x311cf4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x311cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x311cf8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x311cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x311cfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x311cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311d00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x311d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x311d04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x311d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x311d08: 0x26420034  addiu       $v0, $s2, 0x34
    ctx->pc = 0x311d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x311d0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x311d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x311d10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x311d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x311d14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x311d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x311d18: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x311d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x311d1c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x311d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x311d20: 0xae4001f0  sw          $zero, 0x1F0($s2)
    ctx->pc = 0x311d20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 0));
    // 0x311d24: 0xae400530  sw          $zero, 0x530($s2)
    ctx->pc = 0x311d24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1328), GPR_U32(ctx, 0));
    // 0x311d28: 0xae40055c  sw          $zero, 0x55C($s2)
    ctx->pc = 0x311d28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1372), GPR_U32(ctx, 0));
    // 0x311d2c: 0x0  nop
    ctx->pc = 0x311d2cu;
    // NOP
label_311d30:
    // 0x311d30: 0xac40ffd8  sw          $zero, -0x28($v0)
    ctx->pc = 0x311d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967256), GPR_U32(ctx, 0));
    // 0x311d34: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x311d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x311d38: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x311d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x311d3c: 0x0  nop
    ctx->pc = 0x311d3cu;
    // NOP
    // 0x311d40: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x311D40u;
    {
        const bool branch_taken_0x311d40 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x311D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D40u;
        // 0x311d44: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d40) {
            ctx->pc = 0x311D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311d30;
        }
    }
    ctx->pc = 0x311D48u;
    // 0x311d48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x311d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311d4c: 0x24140050  addiu       $s4, $zero, 0x50
    ctx->pc = 0x311d4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x311d50: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x311d50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311d54: 0x24150050  addiu       $s5, $zero, 0x50
    ctx->pc = 0x311d54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_311d58:
    // 0x311d58: 0x2341818  mult        $v1, $s1, $s4
    ctx->pc = 0x311d58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x311d5c: 0x26330001  addiu       $s3, $s1, 0x1
    ctx->pc = 0x311d5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x311d60: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x311d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x311d64: 0x8c44022c  lw          $a0, 0x22C($v0)
    ctx->pc = 0x311d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
    // 0x311d68: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x311D68u;
    {
        const bool branch_taken_0x311d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x311D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D68u;
        // 0x311d6c: 0xac510228  sw          $s1, 0x228($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d68) {
            ctx->pc = 0x311DC4u;
            goto label_311dc4;
        }
    }
    ctx->pc = 0x311D70u;
    // 0x311d70: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x311d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x311d74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x311d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311d78: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x311d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x311d7c: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x311D7Cu;
    {
        const bool branch_taken_0x311d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x311d7c) {
            ctx->pc = 0x311D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311D7Cu;
            // 0x311d80: 0x2341818  mult        $v1, $s1, $s4 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x311DB4u;
            goto label_311db4;
        }
    }
    ctx->pc = 0x311D84u;
    // 0x311d84: 0x2352018  mult        $a0, $s1, $s5
    ctx->pc = 0x311d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x311d88: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x311d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x311d8c: 0x8c42022c  lw          $v0, 0x22C($v0)
    ctx->pc = 0x311d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
    // 0x311d90: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x311d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x311d94: 0x0  nop
    ctx->pc = 0x311d94u;
    // NOP
label_311d98:
    // 0x311d98: 0x0  nop
    ctx->pc = 0x311d98u;
    // NOP
    // 0x311d9c: 0x0  nop
    ctx->pc = 0x311d9cu;
    // NOP
    // 0x311da0: 0x0  nop
    ctx->pc = 0x311da0u;
    // NOP
    // 0x311da4: 0x0  nop
    ctx->pc = 0x311da4u;
    // NOP
    // 0x311da8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x311DA8u;
    {
        const bool branch_taken_0x311da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x311DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311DA8u;
        // 0x311dac: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311da8) {
            ctx->pc = 0x311D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311d98;
        }
    }
    ctx->pc = 0x311DB0u;
    // 0x311db0: 0x2341818  mult        $v1, $s1, $s4
    ctx->pc = 0x311db0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_311db4:
    // 0x311db4: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x311db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x311db8: 0x8c44022c  lw          $a0, 0x22C($v0)
    ctx->pc = 0x311db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
    // 0x311dbc: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x311DBCu;
    SET_GPR_U32(ctx, 31, 0x311DC4u);
    ctx->pc = 0x311DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311DBCu;
    // 0x311dc0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x311DBCu, 0x311DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DC4u;
label_311dc4:
    // 0x311dc4: 0x2341018  mult        $v0, $s1, $s4
    ctx->pc = 0x311dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x311dc8: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x311dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x311dcc: 0x8e040230  lw          $a0, 0x230($s0)
    ctx->pc = 0x311dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x311dd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311DD0u;
    {
        const bool branch_taken_0x311dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x311DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311DD0u;
        // 0x311dd4: 0xae00022c  sw          $zero, 0x22C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311dd0) {
            ctx->pc = 0x311DE0u;
            goto label_311de0;
        }
    }
    ctx->pc = 0x311DD8u;
    // 0x311dd8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x311DD8u;
    SET_GPR_U32(ctx, 31, 0x311DE0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x311DD8u, 0x311DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DE0u;
label_311de0:
    // 0x311de0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x311de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311de4: 0xa2160219  sb          $s6, 0x219($s0)
    ctx->pc = 0x311de4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 537), (uint8_t)GPR_U32(ctx, 22));
    // 0x311de8: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x311de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
    // 0x311dec: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x311decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x311df0: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x311df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x311df4: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x311df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x311df8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x311DF8u;
    {
        const bool branch_taken_0x311df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311DF8u;
        // 0x311dfc: 0xae000214  sw          $zero, 0x214($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311df8) {
            ctx->pc = 0x311D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311d58;
        }
    }
    ctx->pc = 0x311E00u;
    // 0x311e00: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x311E00u;
    SET_GPR_U32(ctx, 31, 0x311E08u);
    ctx->pc = 0x311E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311E00u;
    // 0x311e04: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x311E00u, 0x311E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E08u;
label_311e08:
    // 0x311e08: 0xc0c7aa0  jal         func_31EA80
    ctx->pc = 0x311E08u;
    SET_GPR_U32(ctx, 31, 0x311E10u);
    ctx->pc = 0x311E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311E08u;
    // 0x311e0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA80u, 0x311E08u, 0x311E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E10u;
label_311e10:
    // 0x311e10: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x311e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x311e14: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x311e14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x311e18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x311e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311e1c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x311e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x311e20: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x311e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x311e24: 0xc0c7ac8  jal         func_31EB20
    ctx->pc = 0x311E24u;
    SET_GPR_U32(ctx, 31, 0x311E2Cu);
    ctx->pc = 0x311E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311E24u;
    // 0x311e28: 0x3c080001  lui         $t0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EB20u, 0x311E24u, 0x311E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E2Cu;
label_311e2c:
    // 0x311e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x311e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311e30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x311e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x311e34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x311e34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311e38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x311e38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x311e3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x311e3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311e40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x311e40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x311e44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x311e44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311e48: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x311e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x311e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x311E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E4Cu;
        // 0x311e50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311E54u;
    // 0x311e54: 0x0  nop
    ctx->pc = 0x311e54u;
    // NOP
    ctx->pc = 0x311e58u;
}
