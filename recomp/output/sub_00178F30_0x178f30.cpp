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

// Function: sub_00178F30
// Address: 0x178f30 - 0x178fd8
void sub_00178F30_0x178f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178F30_0x178f30");
#endif

    switch (ctx->pc) {
        case 0x178f30u: goto label_178f30;
        case 0x178f34u: goto label_178f34;
        case 0x178f38u: goto label_178f38;
        case 0x178f3cu: goto label_178f3c;
        case 0x178f40u: goto label_178f40;
        case 0x178f44u: goto label_178f44;
        case 0x178f48u: goto label_178f48;
        case 0x178f4cu: goto label_178f4c;
        case 0x178f50u: goto label_178f50;
        case 0x178f54u: goto label_178f54;
        case 0x178f58u: goto label_178f58;
        case 0x178f5cu: goto label_178f5c;
        case 0x178f60u: goto label_178f60;
        case 0x178f64u: goto label_178f64;
        case 0x178f68u: goto label_178f68;
        case 0x178f6cu: goto label_178f6c;
        case 0x178f70u: goto label_178f70;
        case 0x178f74u: goto label_178f74;
        case 0x178f78u: goto label_178f78;
        case 0x178f7cu: goto label_178f7c;
        case 0x178f80u: goto label_178f80;
        case 0x178f84u: goto label_178f84;
        case 0x178f88u: goto label_178f88;
        case 0x178f8cu: goto label_178f8c;
        case 0x178f90u: goto label_178f90;
        case 0x178f94u: goto label_178f94;
        case 0x178f98u: goto label_178f98;
        case 0x178f9cu: goto label_178f9c;
        case 0x178fa0u: goto label_178fa0;
        case 0x178fa4u: goto label_178fa4;
        case 0x178fa8u: goto label_178fa8;
        case 0x178facu: goto label_178fac;
        case 0x178fb0u: goto label_178fb0;
        case 0x178fb4u: goto label_178fb4;
        case 0x178fb8u: goto label_178fb8;
        case 0x178fbcu: goto label_178fbc;
        case 0x178fc0u: goto label_178fc0;
        case 0x178fc4u: goto label_178fc4;
        case 0x178fc8u: goto label_178fc8;
        case 0x178fccu: goto label_178fcc;
        case 0x178fd0u: goto label_178fd0;
        case 0x178fd4u: goto label_178fd4;
        default: break;
    }

    ctx->pc = 0x178f30u;

label_178f30:
    // 0x178f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_178f34:
    // 0x178f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_178f38:
    // 0x178f38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_178f3c:
    // 0x178f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_178f40:
    // 0x178f40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_178f44:
    // 0x178f44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x178f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_178f48:
    // 0x178f48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x178f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_178f4c:
    // 0x178f4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x178f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_178f50:
    // 0x178f50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x178f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_178f54:
    // 0x178f54: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x178f54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_178f58:
    // 0x178f58: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x178f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_178f5c:
    // 0x178f5c: 0x92020530  lbu         $v0, 0x530($s0)
    ctx->pc = 0x178f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1328)));
label_178f60:
    // 0x178f60: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_178f64:
    if (ctx->pc == 0x178F64u) {
        ctx->pc = 0x178F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F60u;
        // 0x178f64: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178F68u;
        goto label_178f68;
    }
    ctx->pc = 0x178F60u;
    {
        const bool branch_taken_0x178f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F60u;
        // 0x178f64: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f60) {
            ctx->pc = 0x178FB4u;
            goto label_178fb4;
        }
    }
    ctx->pc = 0x178F68u;
label_178f68:
    // 0x178f68: 0xc04f750  jal         func_13DD40
label_178f6c:
    if (ctx->pc == 0x178F6Cu) {
        ctx->pc = 0x178F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F68u;
        // 0x178f6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178F70u;
        goto label_178f70;
    }
    ctx->pc = 0x178F68u;
    SET_GPR_U32(ctx, 31, 0x178F70u);
    ctx->pc = 0x178F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F68u;
    // 0x178f6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x178F68u, 0x178F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F70u;
label_178f70:
    // 0x178f70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x178f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_178f74:
    // 0x178f74: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x178f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_178f78:
    // 0x178f78: 0x50a2000f  beql        $a1, $v0, . + 4 + (0xF << 2)
label_178f7c:
    if (ctx->pc == 0x178F7Cu) {
        ctx->pc = 0x178F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F78u;
        // 0x178f7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178F80u;
        goto label_178f80;
    }
    ctx->pc = 0x178F78u;
    {
        const bool branch_taken_0x178f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x178f78) {
            ctx->pc = 0x178F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178F78u;
            // 0x178f7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178FB8u;
            goto label_178fb8;
        }
    }
    ctx->pc = 0x178F80u;
label_178f80:
    // 0x178f80: 0xc05eb06  jal         func_17AC18
label_178f84:
    if (ctx->pc == 0x178F84u) {
        ctx->pc = 0x178F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F80u;
        // 0x178f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178F88u;
        goto label_178f88;
    }
    ctx->pc = 0x178F80u;
    SET_GPR_U32(ctx, 31, 0x178F88u);
    ctx->pc = 0x178F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F80u;
    // 0x178f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC18u, 0x178F80u, 0x178F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F88u;
label_178f88:
    // 0x178f88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_178f8c:
    if (ctx->pc == 0x178F8Cu) {
        ctx->pc = 0x178F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F88u;
        // 0x178f8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178F90u;
        goto label_178f90;
    }
    ctx->pc = 0x178F88u;
    {
        const bool branch_taken_0x178f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F88u;
        // 0x178f8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f88) {
            ctx->pc = 0x178FB8u;
            goto label_178fb8;
        }
    }
    ctx->pc = 0x178F90u;
label_178f90:
    // 0x178f90: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x178f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_178f94:
    // 0x178f94: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_178f98:
    if (ctx->pc == 0x178F98u) {
        ctx->pc = 0x178F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F94u;
        // 0x178f98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178F9Cu;
        goto label_178f9c;
    }
    ctx->pc = 0x178F94u;
    {
        const bool branch_taken_0x178f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F94u;
        // 0x178f98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f94) {
            ctx->pc = 0x178FB8u;
            goto label_178fb8;
        }
    }
    ctx->pc = 0x178F9Cu;
label_178f9c:
    // 0x178f9c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x178f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_178fa0:
    // 0x178fa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x178fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178fa4:
    // 0x178fa4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x178fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_178fa8:
    // 0x178fa8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x178fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_178fac:
    // 0x178fac: 0x40f809  jalr        $v0
label_178fb0:
    if (ctx->pc == 0x178FB0u) {
        ctx->pc = 0x178FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FACu;
        // 0x178fb0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178FB4u;
        goto label_178fb4;
    }
    ctx->pc = 0x178FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178FB4u);
        ctx->pc = 0x178FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FACu;
        // 0x178fb0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178FACu, 0x178FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x178FB4u;
label_178fb4:
    // 0x178fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178fb8:
    // 0x178fb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_178fbc:
    // 0x178fbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178fbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_178fc0:
    // 0x178fc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178fc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_178fc4:
    // 0x178fc4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x178fc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_178fc8:
    // 0x178fc8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x178fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_178fcc:
    // 0x178fcc: 0x3e00008  jr          $ra
label_178fd0:
    if (ctx->pc == 0x178FD0u) {
        ctx->pc = 0x178FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FCCu;
        // 0x178fd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178FD4u;
        goto label_178fd4;
    }
    ctx->pc = 0x178FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FCCu;
        // 0x178fd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178FD4u;
label_178fd4:
    // 0x178fd4: 0x0  nop
    ctx->pc = 0x178fd4u;
    // NOP
    ctx->pc = 0x178fd8u;
}
