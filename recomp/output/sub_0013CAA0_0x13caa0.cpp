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

// Function: sub_0013CAA0
// Address: 0x13caa0 - 0x13caf0
void sub_0013CAA0_0x13caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CAA0_0x13caa0");
#endif

    switch (ctx->pc) {
        case 0x13caa0u: goto label_13caa0;
        case 0x13caa4u: goto label_13caa4;
        case 0x13caa8u: goto label_13caa8;
        case 0x13caacu: goto label_13caac;
        case 0x13cab0u: goto label_13cab0;
        case 0x13cab4u: goto label_13cab4;
        case 0x13cab8u: goto label_13cab8;
        case 0x13cabcu: goto label_13cabc;
        case 0x13cac0u: goto label_13cac0;
        case 0x13cac4u: goto label_13cac4;
        case 0x13cac8u: goto label_13cac8;
        case 0x13caccu: goto label_13cacc;
        case 0x13cad0u: goto label_13cad0;
        case 0x13cad4u: goto label_13cad4;
        case 0x13cad8u: goto label_13cad8;
        case 0x13cadcu: goto label_13cadc;
        case 0x13cae0u: goto label_13cae0;
        case 0x13cae4u: goto label_13cae4;
        case 0x13cae8u: goto label_13cae8;
        case 0x13caecu: goto label_13caec;
        default: break;
    }

    ctx->pc = 0x13caa0u;

label_13caa0:
    // 0x13caa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13caa4:
    // 0x13caa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13caa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13caa8:
    // 0x13caa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13caa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13caac:
    // 0x13caac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13caacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13cab0:
    // 0x13cab0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13cab4:
    // 0x13cab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13cab8:
    // 0x13cab8: 0xc041d36  jal         func_1074D8
label_13cabc:
    if (ctx->pc == 0x13CABCu) {
        ctx->pc = 0x13CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAB8u;
        // 0x13cabc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAC0u;
        goto label_13cac0;
    }
    ctx->pc = 0x13CAB8u;
    SET_GPR_U32(ctx, 31, 0x13CAC0u);
    ctx->pc = 0x13CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CAB8u;
    // 0x13cabc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1074D8u, 0x13CAB8u, 0x13CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CAC0u;
label_13cac0:
    // 0x13cac0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13cac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cac4:
    // 0x13cac4: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x13cac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_13cac8:
    // 0x13cac8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13cacc:
    // 0x13cacc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13caccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_13cad0:
    // 0x13cad0: 0x40f809  jalr        $v0
label_13cad4:
    if (ctx->pc == 0x13CAD4u) {
        ctx->pc = 0x13CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAD0u;
        // 0x13cad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAD8u;
        goto label_13cad8;
    }
    ctx->pc = 0x13CAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CAD8u);
        ctx->pc = 0x13CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAD0u;
        // 0x13cad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CAD0u, 0x13CAD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CAD8u;
label_13cad8:
    // 0x13cad8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13cad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13cadc:
    // 0x13cadc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13cadcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13cae0:
    // 0x13cae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13cae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13cae4:
    // 0x13cae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13cae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13cae8:
    // 0x13cae8: 0x3e00008  jr          $ra
label_13caec:
    if (ctx->pc == 0x13CAECu) {
        ctx->pc = 0x13CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAE8u;
        // 0x13caec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CAF0u;
        goto label_fallthrough_0x13cae8;
    }
    ctx->pc = 0x13CAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAE8u;
        // 0x13caec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13cae8:
    ctx->pc = 0x13CAF0u;
}
