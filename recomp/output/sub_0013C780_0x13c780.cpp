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

// Function: sub_0013C780
// Address: 0x13c780 - 0x13c7d0
void sub_0013C780_0x13c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C780_0x13c780");
#endif

    switch (ctx->pc) {
        case 0x13c780u: goto label_13c780;
        case 0x13c784u: goto label_13c784;
        case 0x13c788u: goto label_13c788;
        case 0x13c78cu: goto label_13c78c;
        case 0x13c790u: goto label_13c790;
        case 0x13c794u: goto label_13c794;
        case 0x13c798u: goto label_13c798;
        case 0x13c79cu: goto label_13c79c;
        case 0x13c7a0u: goto label_13c7a0;
        case 0x13c7a4u: goto label_13c7a4;
        case 0x13c7a8u: goto label_13c7a8;
        case 0x13c7acu: goto label_13c7ac;
        case 0x13c7b0u: goto label_13c7b0;
        case 0x13c7b4u: goto label_13c7b4;
        case 0x13c7b8u: goto label_13c7b8;
        case 0x13c7bcu: goto label_13c7bc;
        case 0x13c7c0u: goto label_13c7c0;
        case 0x13c7c4u: goto label_13c7c4;
        case 0x13c7c8u: goto label_13c7c8;
        case 0x13c7ccu: goto label_13c7cc;
        default: break;
    }

    ctx->pc = 0x13c780u;

label_13c780:
    // 0x13c780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13c784:
    // 0x13c784: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13c788:
    // 0x13c788: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c78c:
    // 0x13c78c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13c790:
    // 0x13c790: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13c790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13c794:
    // 0x13c794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13c798:
    // 0x13c798: 0xc041d94  jal         func_107650
label_13c79c:
    if (ctx->pc == 0x13C79Cu) {
        ctx->pc = 0x13C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C798u;
        // 0x13c79c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C7A0u;
        goto label_13c7a0;
    }
    ctx->pc = 0x13C798u;
    SET_GPR_U32(ctx, 31, 0x13C7A0u);
    ctx->pc = 0x13C79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C798u;
    // 0x13c79c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107650u, 0x13C798u, 0x13C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C7A0u;
label_13c7a0:
    // 0x13c7a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c7a4:
    // 0x13c7a4: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x13c7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_13c7a8:
    // 0x13c7a8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13c7ac:
    // 0x13c7ac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_13c7b0:
    // 0x13c7b0: 0x40f809  jalr        $v0
label_13c7b4:
    if (ctx->pc == 0x13C7B4u) {
        ctx->pc = 0x13C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7B0u;
        // 0x13c7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C7B8u;
        goto label_13c7b8;
    }
    ctx->pc = 0x13C7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C7B8u);
        ctx->pc = 0x13C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7B0u;
        // 0x13c7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C7B0u, 0x13C7B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C7B8u;
label_13c7b8:
    // 0x13c7b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13c7b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c7bc:
    // 0x13c7bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c7bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13c7c0:
    // 0x13c7c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c7c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c7c4:
    // 0x13c7c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c7c8:
    // 0x13c7c8: 0x3e00008  jr          $ra
label_13c7cc:
    if (ctx->pc == 0x13C7CCu) {
        ctx->pc = 0x13C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7C8u;
        // 0x13c7cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C7D0u;
        goto label_fallthrough_0x13c7c8;
    }
    ctx->pc = 0x13C7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7C8u;
        // 0x13c7cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13c7c8:
    ctx->pc = 0x13C7D0u;
}
