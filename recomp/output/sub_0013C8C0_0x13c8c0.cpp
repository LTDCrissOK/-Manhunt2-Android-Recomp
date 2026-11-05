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

// Function: sub_0013C8C0
// Address: 0x13c8c0 - 0x13c910
void sub_0013C8C0_0x13c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C8C0_0x13c8c0");
#endif

    switch (ctx->pc) {
        case 0x13c8c0u: goto label_13c8c0;
        case 0x13c8c4u: goto label_13c8c4;
        case 0x13c8c8u: goto label_13c8c8;
        case 0x13c8ccu: goto label_13c8cc;
        case 0x13c8d0u: goto label_13c8d0;
        case 0x13c8d4u: goto label_13c8d4;
        case 0x13c8d8u: goto label_13c8d8;
        case 0x13c8dcu: goto label_13c8dc;
        case 0x13c8e0u: goto label_13c8e0;
        case 0x13c8e4u: goto label_13c8e4;
        case 0x13c8e8u: goto label_13c8e8;
        case 0x13c8ecu: goto label_13c8ec;
        case 0x13c8f0u: goto label_13c8f0;
        case 0x13c8f4u: goto label_13c8f4;
        case 0x13c8f8u: goto label_13c8f8;
        case 0x13c8fcu: goto label_13c8fc;
        case 0x13c900u: goto label_13c900;
        case 0x13c904u: goto label_13c904;
        case 0x13c908u: goto label_13c908;
        case 0x13c90cu: goto label_13c90c;
        default: break;
    }

    ctx->pc = 0x13c8c0u;

label_13c8c0:
    // 0x13c8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13c8c4:
    // 0x13c8c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13c8c8:
    // 0x13c8c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c8c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c8cc:
    // 0x13c8cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13c8d0:
    // 0x13c8d0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13c8d4:
    // 0x13c8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13c8d8:
    // 0x13c8d8: 0xc041d40  jal         func_107500
label_13c8dc:
    if (ctx->pc == 0x13C8DCu) {
        ctx->pc = 0x13C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8D8u;
        // 0x13c8dc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8E0u;
        goto label_13c8e0;
    }
    ctx->pc = 0x13C8D8u;
    SET_GPR_U32(ctx, 31, 0x13C8E0u);
    ctx->pc = 0x13C8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C8D8u;
    // 0x13c8dc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107500u, 0x13C8D8u, 0x13C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8E0u;
label_13c8e0:
    // 0x13c8e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c8e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c8e4:
    // 0x13c8e4: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x13c8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_13c8e8:
    // 0x13c8e8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13c8ec:
    // 0x13c8ec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_13c8f0:
    // 0x13c8f0: 0x40f809  jalr        $v0
label_13c8f4:
    if (ctx->pc == 0x13C8F4u) {
        ctx->pc = 0x13C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8F0u;
        // 0x13c8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8F8u;
        goto label_13c8f8;
    }
    ctx->pc = 0x13C8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C8F8u);
        ctx->pc = 0x13C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8F0u;
        // 0x13c8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C8F0u, 0x13C8F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C8F8u;
label_13c8f8:
    // 0x13c8f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13c8f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c8fc:
    // 0x13c8fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c8fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13c900:
    // 0x13c900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c904:
    // 0x13c904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c908:
    // 0x13c908: 0x3e00008  jr          $ra
label_13c90c:
    if (ctx->pc == 0x13C90Cu) {
        ctx->pc = 0x13C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C908u;
        // 0x13c90c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C910u;
        goto label_fallthrough_0x13c908;
    }
    ctx->pc = 0x13C908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C908u;
        // 0x13c90c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13c908:
    ctx->pc = 0x13C910u;
}
