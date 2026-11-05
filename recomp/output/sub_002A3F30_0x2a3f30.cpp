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

// Function: sub_002A3F30
// Address: 0x2a3f30 - 0x2a3f98
void sub_002A3F30_0x2a3f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3F30_0x2a3f30");
#endif

    switch (ctx->pc) {
        case 0x2a3f30u: goto label_2a3f30;
        case 0x2a3f34u: goto label_2a3f34;
        case 0x2a3f38u: goto label_2a3f38;
        case 0x2a3f3cu: goto label_2a3f3c;
        case 0x2a3f40u: goto label_2a3f40;
        case 0x2a3f44u: goto label_2a3f44;
        case 0x2a3f48u: goto label_2a3f48;
        case 0x2a3f4cu: goto label_2a3f4c;
        case 0x2a3f50u: goto label_2a3f50;
        case 0x2a3f54u: goto label_2a3f54;
        case 0x2a3f58u: goto label_2a3f58;
        case 0x2a3f5cu: goto label_2a3f5c;
        case 0x2a3f60u: goto label_2a3f60;
        case 0x2a3f64u: goto label_2a3f64;
        case 0x2a3f68u: goto label_2a3f68;
        case 0x2a3f6cu: goto label_2a3f6c;
        case 0x2a3f70u: goto label_2a3f70;
        case 0x2a3f74u: goto label_2a3f74;
        case 0x2a3f78u: goto label_2a3f78;
        case 0x2a3f7cu: goto label_2a3f7c;
        case 0x2a3f80u: goto label_2a3f80;
        case 0x2a3f84u: goto label_2a3f84;
        case 0x2a3f88u: goto label_2a3f88;
        case 0x2a3f8cu: goto label_2a3f8c;
        case 0x2a3f90u: goto label_2a3f90;
        case 0x2a3f94u: goto label_2a3f94;
        default: break;
    }

    ctx->pc = 0x2a3f30u;

label_2a3f30:
    // 0x2a3f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a3f34:
    // 0x2a3f34: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2a3f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_2a3f38:
    // 0x2a3f38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a3f3c:
    // 0x2a3f3c: 0x244236a0  addiu       $v0, $v0, 0x36A0
    ctx->pc = 0x2a3f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13984));
label_2a3f40:
    // 0x2a3f40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a3f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2a3f44:
    // 0x2a3f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a3f48:
    // 0x2a3f48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a3f4c:
    // 0x2a3f4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a3f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a3f50:
    // 0x2a3f50: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a3f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a3f54:
    // 0x2a3f54: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2a3f58:
    if (ctx->pc == 0x2A3F58u) {
        ctx->pc = 0x2A3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3F54u;
        // 0x2a3f58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3F5Cu;
        goto label_2a3f5c;
    }
    ctx->pc = 0x2A3F54u;
    {
        const bool branch_taken_0x2a3f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3F54u;
        // 0x2a3f58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3f54) {
            ctx->pc = 0x2A3F6Cu;
            goto label_2a3f6c;
        }
    }
    ctx->pc = 0x2A3F5Cu;
label_2a3f5c:
    // 0x2a3f5c: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2a3f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_2a3f60:
    // 0x2a3f60: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2a3f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2a3f64:
    // 0x2a3f64: 0x40f809  jalr        $v0
label_2a3f68:
    if (ctx->pc == 0x2A3F68u) {
        ctx->pc = 0x2A3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3F64u;
        // 0x2a3f68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3F6Cu;
        goto label_2a3f6c;
    }
    ctx->pc = 0x2A3F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3F6Cu);
        ctx->pc = 0x2A3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3F64u;
        // 0x2a3f68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3F64u, 0x2A3F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3F6Cu;
label_2a3f6c:
    // 0x2a3f6c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2a3f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2a3f70:
    // 0x2a3f70: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2a3f74:
    if (ctx->pc == 0x2A3F74u) {
        ctx->pc = 0x2A3F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3F70u;
        // 0x2a3f74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3F78u;
        goto label_2a3f78;
    }
    ctx->pc = 0x2A3F70u;
    {
        const bool branch_taken_0x2a3f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3f70) {
            ctx->pc = 0x2A3F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3F70u;
            // 0x2a3f74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3F84u;
            goto label_2a3f84;
        }
    }
    ctx->pc = 0x2A3F78u;
label_2a3f78:
    // 0x2a3f78: 0xc0f5222  jal         func_3D4888
label_2a3f7c:
    if (ctx->pc == 0x2A3F7Cu) {
        ctx->pc = 0x2A3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3F78u;
        // 0x2a3f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3F80u;
        goto label_2a3f80;
    }
    ctx->pc = 0x2A3F78u;
    SET_GPR_U32(ctx, 31, 0x2A3F80u);
    ctx->pc = 0x2A3F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3F78u;
    // 0x2a3f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2A3F78u, 0x2A3F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F80u;
label_2a3f80:
    // 0x2a3f80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3f84:
    // 0x2a3f84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a3f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2a3f88:
    // 0x2a3f88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3f8c:
    // 0x2a3f8c: 0x3e00008  jr          $ra
label_2a3f90:
    if (ctx->pc == 0x2A3F90u) {
        ctx->pc = 0x2A3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3F8Cu;
        // 0x2a3f90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3F94u;
        goto label_2a3f94;
    }
    ctx->pc = 0x2A3F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3F8Cu;
        // 0x2a3f90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3F94u;
label_2a3f94:
    // 0x2a3f94: 0x0  nop
    ctx->pc = 0x2a3f94u;
    // NOP
    ctx->pc = 0x2a3f98u;
}
