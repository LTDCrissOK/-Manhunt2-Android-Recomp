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

// Function: sub_00131F20
// Address: 0x131f20 - 0x1320b0
void sub_00131F20_0x131f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131F20_0x131f20");
#endif

    switch (ctx->pc) {
        case 0x131f90u: goto label_131f90;
        case 0x131f9cu: goto label_131f9c;
        case 0x131fa8u: goto label_131fa8;
        case 0x131fb4u: goto label_131fb4;
        case 0x131fc8u: goto label_131fc8;
        case 0x132008u: goto label_132008;
        case 0x132018u: goto label_132018;
        case 0x132038u: goto label_132038;
        case 0x132080u: goto label_132080;
        default: break;
    }

    ctx->pc = 0x131f20u;

    // 0x131f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131f24: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x131f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x131f28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x131f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x131f2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x131f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x131f30: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x131f30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x131f34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131f3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x131f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x131f40: 0x143100  sll         $a2, $s4, 4
    ctx->pc = 0x131f40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x131f44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x131f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x131f48: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x131f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x131f4c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x131f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x131f50: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x131f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x131f54: 0x1482001d  bne         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x131F54u;
    {
        const bool branch_taken_0x131f54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x131F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F54u;
        // 0x131f58: 0x148900  sll         $s1, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f54) {
            ctx->pc = 0x131FCCu;
            goto label_131fcc;
        }
    }
    ctx->pc = 0x131F5Cu;
    // 0x131f5c: 0x2662001c  addiu       $v0, $s3, 0x1C
    ctx->pc = 0x131f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x131f60: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x131f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131f64: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x131f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x131f68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x131f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131f6c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131F6Cu;
    {
        const bool branch_taken_0x131f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x131F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F6Cu;
        // 0x131f70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f6c) {
            ctx->pc = 0x131F80u;
            goto label_131f80;
        }
    }
    ctx->pc = 0x131F74u;
    // 0x131f74: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x131f74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x131f78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x131f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131f7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x131f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_131f80:
    // 0x131f80: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x131F80u;
    {
        const bool branch_taken_0x131f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x131F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F80u;
        // 0x131f84: 0x2661021  addu        $v0, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f80) {
            ctx->pc = 0x131FC8u;
            goto label_131fc8;
        }
    }
    ctx->pc = 0x131F88u;
    // 0x131f88: 0xc0461e0  jal         func_118780
    ctx->pc = 0x131F88u;
    SET_GPR_U32(ctx, 31, 0x131F90u);
    ctx->pc = 0x131F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F88u;
    // 0x131f8c: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118780u, 0x131F88u, 0x131F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F90u;
label_131f90:
    // 0x131f90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x131f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f94: 0xc042442  jal         func_109108
    ctx->pc = 0x131F94u;
    SET_GPR_U32(ctx, 31, 0x131F9Cu);
    ctx->pc = 0x131F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131F94u;
    // 0x131f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109108u, 0x131F94u, 0x131F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F9Cu;
label_131f9c:
    // 0x131f9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x131f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fa0: 0xc04244e  jal         func_109138
    ctx->pc = 0x131FA0u;
    SET_GPR_U32(ctx, 31, 0x131FA8u);
    ctx->pc = 0x131FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131FA0u;
    // 0x131fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109138u, 0x131FA0u, 0x131FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131FA8u;
label_131fa8:
    // 0x131fa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x131fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fac: 0xc04244c  jal         func_109130
    ctx->pc = 0x131FACu;
    SET_GPR_U32(ctx, 31, 0x131FB4u);
    ctx->pc = 0x131FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131FACu;
    // 0x131fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109130u, 0x131FACu, 0x131FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131FB4u;
label_131fb4:
    // 0x131fb4: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x131fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x131fb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fbc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x131fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fc0: 0xc043b9e  jal         func_10EE78
    ctx->pc = 0x131FC0u;
    SET_GPR_U32(ctx, 31, 0x131FC8u);
    ctx->pc = 0x131FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131FC0u;
    // 0x131fc4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EE78u, 0x131FC0u, 0x131FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131FC8u;
label_131fc8:
    // 0x131fc8: 0x148900  sll         $s1, $s4, 4
    ctx->pc = 0x131fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_131fcc:
    // 0x131fcc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x131fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x131fd0: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x131fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x131fd4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x131fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x131fd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x131fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fe0: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x131fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x131fe4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x131fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x131fe8: 0x26630024  addiu       $v1, $s3, 0x24
    ctx->pc = 0x131fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x131fec: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x131fecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x131ff0: 0x718021  addu        $s0, $v1, $s1
    ctx->pc = 0x131ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x131ff4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x131ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131ff8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x131FF8u;
    {
        const bool branch_taken_0x131ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x131FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131FF8u;
        // 0x131ffc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ff8) {
            ctx->pc = 0x132020u;
            goto label_132020;
        }
    }
    ctx->pc = 0x132000u;
    // 0x132000: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x132000u;
    SET_GPR_U32(ctx, 31, 0x132008u);
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x132000u, 0x132008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132008u;
label_132008:
    // 0x132008: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x132008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13200c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13200cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132010: 0xc042136  jal         func_1084D8
    ctx->pc = 0x132010u;
    SET_GPR_U32(ctx, 31, 0x132018u);
    ctx->pc = 0x132014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132010u;
    // 0x132014: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x132010u, 0x132018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132018u;
label_132018:
    // 0x132018: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x132018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x13201c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13201cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_132020:
    // 0x132020: 0x8e620218  lw          $v0, 0x218($s3)
    ctx->pc = 0x132020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
    // 0x132024: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x132024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x132028: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x132028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13202c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13202Cu;
    {
        const bool branch_taken_0x13202c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13202Cu;
        // 0x132030: 0x26220018  addiu       $v0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13202c) {
            ctx->pc = 0x132078u;
            goto label_132078;
        }
    }
    ctx->pc = 0x132034u;
    // 0x132034: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x132034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_132038:
    // 0x132038: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x132038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13203c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13203cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x132040: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x132040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x132044: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x132044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x132048: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x132048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13204c: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x13204cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x132050: 0x68470027  ldl         $a3, 0x27($v0)
    ctx->pc = 0x132050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x132054: 0x6c470020  ldr         $a3, 0x20($v0)
    ctx->pc = 0x132054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x132058: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x132058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13205c: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x13205cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x132060: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x132060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x132064: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x132064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x132068: 0x8e620218  lw          $v0, 0x218($s3)
    ctx->pc = 0x132068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
    // 0x13206c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x13206cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x132070: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x132070u;
    {
        const bool branch_taken_0x132070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132070u;
        // 0x132074: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132070) {
            ctx->pc = 0x132038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132038;
        }
    }
    ctx->pc = 0x132078u;
label_132078:
    // 0x132078: 0xc04c794  jal         func_131E50
    ctx->pc = 0x132078u;
    SET_GPR_U32(ctx, 31, 0x132080u);
    ctx->pc = 0x13207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132078u;
    // 0x13207c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E50u, 0x132078u, 0x132080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132080u;
label_132080:
    // 0x132080: 0x8e620218  lw          $v0, 0x218($s3)
    ctx->pc = 0x132080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
    // 0x132084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132088: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x132088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13208c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13208cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132090: 0xae620218  sw          $v0, 0x218($s3)
    ctx->pc = 0x132090u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 536), GPR_U32(ctx, 2));
    // 0x132094: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x132094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132098: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x132098u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13209c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13209cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1320a0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1320a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1320a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1320A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1320A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320A4u;
        // 0x1320a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1320A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1320ACu;
    // 0x1320ac: 0x0  nop
    ctx->pc = 0x1320acu;
    // NOP
    ctx->pc = 0x1320b0u;
}
