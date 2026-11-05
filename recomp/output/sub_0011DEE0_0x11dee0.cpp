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

// Function: sub_0011DEE0
// Address: 0x11dee0 - 0x11dfb0
void sub_0011DEE0_0x11dee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DEE0_0x11dee0");
#endif

    switch (ctx->pc) {
        case 0x11df38u: goto label_11df38;
        case 0x11df50u: goto label_11df50;
        case 0x11df60u: goto label_11df60;
        case 0x11df7cu: goto label_11df7c;
        case 0x11df90u: goto label_11df90;
        default: break;
    }

    ctx->pc = 0x11dee0u;

    // 0x11dee0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11dee4: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x11dee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x11dee8: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x11dee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x11deec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11deecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11def0: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x11def0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x11def4: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x11def4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11def8: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x11def8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x11defc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11defcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df00: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x11df00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x11df04: 0x8c430310  lw          $v1, 0x310($v0)
    ctx->pc = 0x11df04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 784)));
    // 0x11df08: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x11DF08u;
    {
        const bool branch_taken_0x11df08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF08u;
        // 0x11df0c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df08) {
            ctx->pc = 0x11DF64u;
            goto label_11df64;
        }
    }
    ctx->pc = 0x11DF10u;
    // 0x11df10: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x11df10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x11df14: 0x37a40002  ori         $a0, $sp, 0x2
    ctx->pc = 0x11df14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
    // 0x11df18: 0x2449c328  addiu       $t1, $v0, -0x3CD8
    ctx->pc = 0x11df18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951720));
    // 0x11df1c: 0x81230000  lb          $v1, 0x0($t1)
    ctx->pc = 0x11df1cu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x43C328u));
    // 0x11df20: 0x81270001  lb          $a3, 0x1($t1)
    ctx->pc = 0x11df20u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x43C329u));
    // 0x11df24: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x11df24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11df28: 0xa3a70001  sb          $a3, 0x1($sp)
    ctx->pc = 0x11df28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x11df2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11df2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df30: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x11DF30u;
    SET_GPR_U32(ctx, 31, 0x11DF38u);
    ctx->pc = 0x11DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF30u;
    // 0x11df34: 0x2406007e  addiu       $a2, $zero, 0x7E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x11DF30u, 0x11DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF38u;
label_11df38:
    // 0x11df38: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x11df38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x11df3c: 0x8c440390  lw          $a0, 0x390($v0)
    ctx->pc = 0x11df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 912)));
    // 0x11df40: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DF40u;
    {
        const bool branch_taken_0x11df40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11df40) {
            ctx->pc = 0x11DF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DF40u;
            // 0x11df44: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DF54u;
            goto label_11df54;
        }
    }
    ctx->pc = 0x11DF48u;
    // 0x11df48: 0xc0aaf3c  jal         func_2ABCF0
    ctx->pc = 0x11DF48u;
    SET_GPR_U32(ctx, 31, 0x11DF50u);
    ctx->pc = 0x11DF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF48u;
    // 0x11df4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABCF0u, 0x11DF48u, 0x11DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF50u;
label_11df50:
    // 0x11df50: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11df50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_11df54:
    // 0x11df54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11df54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df58: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x11DF58u;
    SET_GPR_U32(ctx, 31, 0x11DF60u);
    ctx->pc = 0x11DF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF58u;
    // 0x11df5c: 0x24a5c388  addiu       $a1, $a1, -0x3C78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x11DF58u, 0x11DF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF60u;
label_11df60:
    // 0x11df60: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x11df60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_11df64:
    // 0x11df64: 0x26300390  addiu       $s0, $s1, 0x390
    ctx->pc = 0x11df64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x11df68: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x11df68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11df6c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x11df6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11df70: 0xac600310  sw          $zero, 0x310($v1)
    ctx->pc = 0x11df70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 784), GPR_U32(ctx, 0));
    // 0x11df74: 0xc0aae42  jal         func_2AB908
    ctx->pc = 0x11DF74u;
    SET_GPR_U32(ctx, 31, 0x11DF7Cu);
    ctx->pc = 0x11DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF74u;
    // 0x11df78: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB908u, 0x11DF74u, 0x11DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF7Cu;
label_11df7c:
    // 0x11df7c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x11df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x11df80: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x11df80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11df84: 0x24842408  addiu       $a0, $a0, 0x2408
    ctx->pc = 0x11df84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9224));
    // 0x11df88: 0xc0f6e5a  jal         func_3DB968
    ctx->pc = 0x11DF88u;
    SET_GPR_U32(ctx, 31, 0x11DF90u);
    ctx->pc = 0x11DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF88u;
    // 0x11df8c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB968u, 0x11DF88u, 0x11DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF90u;
label_11df90:
    // 0x11df90: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x11df90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x11df94: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x11df94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11df98: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x11df98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x11df9c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x11df9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11dfa0: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x11dfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x11dfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x11DFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFA4u;
        // 0x11dfa8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DFACu;
    // 0x11dfac: 0x0  nop
    ctx->pc = 0x11dfacu;
    // NOP
    ctx->pc = 0x11dfb0u;
}
