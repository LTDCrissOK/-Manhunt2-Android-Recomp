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

// Function: sub_00175F00
// Address: 0x175f00 - 0x175fc0
void sub_00175F00_0x175f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175F00_0x175f00");
#endif

    switch (ctx->pc) {
        case 0x175f00u: goto label_175f00;
        case 0x175f04u: goto label_175f04;
        case 0x175f08u: goto label_175f08;
        case 0x175f0cu: goto label_175f0c;
        case 0x175f10u: goto label_175f10;
        case 0x175f14u: goto label_175f14;
        case 0x175f18u: goto label_175f18;
        case 0x175f1cu: goto label_175f1c;
        case 0x175f20u: goto label_175f20;
        case 0x175f24u: goto label_175f24;
        case 0x175f28u: goto label_175f28;
        case 0x175f2cu: goto label_175f2c;
        case 0x175f30u: goto label_175f30;
        case 0x175f34u: goto label_175f34;
        case 0x175f38u: goto label_175f38;
        case 0x175f3cu: goto label_175f3c;
        case 0x175f40u: goto label_175f40;
        case 0x175f44u: goto label_175f44;
        case 0x175f48u: goto label_175f48;
        case 0x175f4cu: goto label_175f4c;
        case 0x175f50u: goto label_175f50;
        case 0x175f54u: goto label_175f54;
        case 0x175f58u: goto label_175f58;
        case 0x175f5cu: goto label_175f5c;
        case 0x175f60u: goto label_175f60;
        case 0x175f64u: goto label_175f64;
        case 0x175f68u: goto label_175f68;
        case 0x175f6cu: goto label_175f6c;
        case 0x175f70u: goto label_175f70;
        case 0x175f74u: goto label_175f74;
        case 0x175f78u: goto label_175f78;
        case 0x175f7cu: goto label_175f7c;
        case 0x175f80u: goto label_175f80;
        case 0x175f84u: goto label_175f84;
        case 0x175f88u: goto label_175f88;
        case 0x175f8cu: goto label_175f8c;
        case 0x175f90u: goto label_175f90;
        case 0x175f94u: goto label_175f94;
        case 0x175f98u: goto label_175f98;
        case 0x175f9cu: goto label_175f9c;
        case 0x175fa0u: goto label_175fa0;
        case 0x175fa4u: goto label_175fa4;
        case 0x175fa8u: goto label_175fa8;
        case 0x175facu: goto label_175fac;
        case 0x175fb0u: goto label_175fb0;
        case 0x175fb4u: goto label_175fb4;
        case 0x175fb8u: goto label_175fb8;
        case 0x175fbcu: goto label_175fbc;
        default: break;
    }

    ctx->pc = 0x175f00u;

label_175f00:
    // 0x175f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_175f04:
    // 0x175f04: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x175f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175f08:
    // 0x175f08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_175f0c:
    // 0x175f0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_175f10:
    // 0x175f10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x175f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175f14:
    // 0x175f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_175f18:
    // 0x175f18: 0x8ce300b4  lw          $v1, 0xB4($a3)
    ctx->pc = 0x175f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
label_175f1c:
    // 0x175f1c: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x175f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_175f20:
    // 0x175f20: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_175f24:
    if (ctx->pc == 0x175F24u) {
        ctx->pc = 0x175F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F20u;
        // 0x175f24: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F28u;
        goto label_175f28;
    }
    ctx->pc = 0x175F20u;
    {
        const bool branch_taken_0x175f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F20u;
        // 0x175f24: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f20) {
            ctx->pc = 0x175FCCu;
            return;
        }
    }
    ctx->pc = 0x175F28u;
label_175f28:
    // 0x175f28: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x175f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_175f2c:
    // 0x175f2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x175f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_175f30:
    // 0x175f30: 0x2442f480  addiu       $v0, $v0, -0xB80
    ctx->pc = 0x175f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964352));
label_175f34:
    // 0x175f34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x175f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_175f38:
    // 0x175f38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x175f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_175f3c:
    // 0x175f3c: 0x800008  jr          $a0
label_175f40:
    if (ctx->pc == 0x175F40u) {
        ctx->pc = 0x175F44u;
        goto label_175f44;
    }
    ctx->pc = 0x175F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175F44u: goto label_175f44;
            case 0x175F4Cu: goto label_175f4c;
            case 0x175F60u: goto label_175f60;
            case 0x175F80u: goto label_175f80;
            case 0x175F94u: goto label_175f94;
            case 0x175FB4u: goto label_175fb4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175F3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x175F44u;
label_175f44:
    // 0x175f44: 0x10000002  b           . + 4 + (0x2 << 2)
label_175f48:
    if (ctx->pc == 0x175F48u) {
        ctx->pc = 0x175F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F44u;
        // 0x175f48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F4Cu;
        goto label_175f4c;
    }
    ctx->pc = 0x175F44u;
    {
        const bool branch_taken_0x175f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F44u;
        // 0x175f48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f44) {
            ctx->pc = 0x175F50u;
            goto label_175f50;
        }
    }
    ctx->pc = 0x175F4Cu;
label_175f4c:
    // 0x175f4c: 0x90e20068  lbu         $v0, 0x68($a3)
    ctx->pc = 0x175f4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 104)));
label_175f50:
    // 0x175f50: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x175f50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_175f54:
    // 0x175f54: 0x90e30069  lbu         $v1, 0x69($a3)
    ctx->pc = 0x175f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 105)));
label_175f58:
    // 0x175f58: 0x1000001c  b           . + 4 + (0x1C << 2)
label_175f5c:
    if (ctx->pc == 0x175F5Cu) {
        ctx->pc = 0x175F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F58u;
        // 0x175f5c: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F60u;
        goto label_175f60;
    }
    ctx->pc = 0x175F58u;
    {
        const bool branch_taken_0x175f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F58u;
        // 0x175f5c: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f58) {
            ctx->pc = 0x175FCCu;
            return;
        }
    }
    ctx->pc = 0x175F60u;
label_175f60:
    // 0x175f60: 0x8ce400b0  lw          $a0, 0xB0($a3)
    ctx->pc = 0x175f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
label_175f64:
    // 0x175f64: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x175f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_175f68:
    // 0x175f68: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x175f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_175f6c:
    // 0x175f6c: 0x40f809  jalr        $v0
label_175f70:
    if (ctx->pc == 0x175F70u) {
        ctx->pc = 0x175F74u;
        goto label_175f74;
    }
    ctx->pc = 0x175F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175F74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175F6Cu, 0x175F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175F74u;
label_175f74:
    // 0x175f74: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x175f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_175f78:
    // 0x175f78: 0x5043000f  beql        $v0, $v1, . + 4 + (0xF << 2)
label_175f7c:
    if (ctx->pc == 0x175F7Cu) {
        ctx->pc = 0x175F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F78u;
        // 0x175f7c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F80u;
        goto label_175f80;
    }
    ctx->pc = 0x175F78u;
    {
        const bool branch_taken_0x175f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x175f78) {
            ctx->pc = 0x175F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175F78u;
            // 0x175f7c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175FB8u;
            goto label_175fb8;
        }
    }
    ctx->pc = 0x175F80u;
label_175f80:
    // 0x175f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175f84:
    // 0x175f84: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x175f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_175f88:
    // 0x175f88: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x175f88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_175f8c:
    // 0x175f8c: 0x1000000f  b           . + 4 + (0xF << 2)
label_175f90:
    if (ctx->pc == 0x175F90u) {
        ctx->pc = 0x175F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F8Cu;
        // 0x175f90: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F94u;
        goto label_175f94;
    }
    ctx->pc = 0x175F8Cu;
    {
        const bool branch_taken_0x175f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F8Cu;
        // 0x175f90: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f8c) {
            ctx->pc = 0x175FCCu;
            return;
        }
    }
    ctx->pc = 0x175F94u;
label_175f94:
    // 0x175f94: 0x8ce400b0  lw          $a0, 0xB0($a3)
    ctx->pc = 0x175f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
label_175f98:
    // 0x175f98: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x175f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_175f9c:
    // 0x175f9c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x175f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_175fa0:
    // 0x175fa0: 0x40f809  jalr        $v0
label_175fa4:
    if (ctx->pc == 0x175FA4u) {
        ctx->pc = 0x175FA8u;
        goto label_175fa8;
    }
    ctx->pc = 0x175FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175FA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175FA0u, 0x175FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175FA8u;
label_175fa8:
    // 0x175fa8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x175fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_175fac:
    // 0x175fac: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_175fb0:
    if (ctx->pc == 0x175FB0u) {
        ctx->pc = 0x175FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FACu;
        // 0x175fb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175FB4u;
        goto label_175fb4;
    }
    ctx->pc = 0x175FACu;
    {
        const bool branch_taken_0x175fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x175FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FACu;
        // 0x175fb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fac) {
            ctx->pc = 0x175FC4u;
            return;
        }
    }
    ctx->pc = 0x175FB4u;
label_175fb4:
    // 0x175fb4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x175fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_175fb8:
    // 0x175fb8: 0x10000004  b           . + 4 + (0x4 << 2)
label_175fbc:
    if (ctx->pc == 0x175FBCu) {
        ctx->pc = 0x175FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FB8u;
        // 0x175fbc: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175FC0u;
        goto label_fallthrough_0x175fb8;
    }
    ctx->pc = 0x175FB8u;
    {
        const bool branch_taken_0x175fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FB8u;
        // 0x175fbc: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fb8) {
            ctx->pc = 0x175FCCu;
            return;
        }
    }
label_fallthrough_0x175fb8:
    ctx->pc = 0x175FC0u;
}
