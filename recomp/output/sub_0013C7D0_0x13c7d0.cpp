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

// Function: sub_0013C7D0
// Address: 0x13c7d0 - 0x13c820
void sub_0013C7D0_0x13c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C7D0_0x13c7d0");
#endif

    switch (ctx->pc) {
        case 0x13c7d0u: goto label_13c7d0;
        case 0x13c7d4u: goto label_13c7d4;
        case 0x13c7d8u: goto label_13c7d8;
        case 0x13c7dcu: goto label_13c7dc;
        case 0x13c7e0u: goto label_13c7e0;
        case 0x13c7e4u: goto label_13c7e4;
        case 0x13c7e8u: goto label_13c7e8;
        case 0x13c7ecu: goto label_13c7ec;
        case 0x13c7f0u: goto label_13c7f0;
        case 0x13c7f4u: goto label_13c7f4;
        case 0x13c7f8u: goto label_13c7f8;
        case 0x13c7fcu: goto label_13c7fc;
        case 0x13c800u: goto label_13c800;
        case 0x13c804u: goto label_13c804;
        case 0x13c808u: goto label_13c808;
        case 0x13c80cu: goto label_13c80c;
        case 0x13c810u: goto label_13c810;
        case 0x13c814u: goto label_13c814;
        case 0x13c818u: goto label_13c818;
        case 0x13c81cu: goto label_13c81c;
        default: break;
    }

    ctx->pc = 0x13c7d0u;

label_13c7d0:
    // 0x13c7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13c7d4:
    // 0x13c7d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13c7d8:
    // 0x13c7d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c7d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c7dc:
    // 0x13c7dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13c7e0:
    // 0x13c7e0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13c7e4:
    // 0x13c7e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13c7e8:
    // 0x13c7e8: 0xc041d74  jal         func_1075D0
label_13c7ec:
    if (ctx->pc == 0x13C7ECu) {
        ctx->pc = 0x13C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7E8u;
        // 0x13c7ec: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C7F0u;
        goto label_13c7f0;
    }
    ctx->pc = 0x13C7E8u;
    SET_GPR_U32(ctx, 31, 0x13C7F0u);
    ctx->pc = 0x13C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C7E8u;
    // 0x13c7ec: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1075D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1075D0u, 0x13C7E8u, 0x13C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C7F0u;
label_13c7f0:
    // 0x13c7f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c7f4:
    // 0x13c7f4: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x13c7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_13c7f8:
    // 0x13c7f8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13c7fc:
    // 0x13c7fc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_13c800:
    // 0x13c800: 0x40f809  jalr        $v0
label_13c804:
    if (ctx->pc == 0x13C804u) {
        ctx->pc = 0x13C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C800u;
        // 0x13c804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C808u;
        goto label_13c808;
    }
    ctx->pc = 0x13C800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C808u);
        ctx->pc = 0x13C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C800u;
        // 0x13c804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C800u, 0x13C808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C808u;
label_13c808:
    // 0x13c808: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13c808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c80c:
    // 0x13c80c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c80cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13c810:
    // 0x13c810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c814:
    // 0x13c814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c818:
    // 0x13c818: 0x3e00008  jr          $ra
label_13c81c:
    if (ctx->pc == 0x13C81Cu) {
        ctx->pc = 0x13C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C818u;
        // 0x13c81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C820u;
        goto label_fallthrough_0x13c818;
    }
    ctx->pc = 0x13C818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C818u;
        // 0x13c81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13c818:
    ctx->pc = 0x13C820u;
}
