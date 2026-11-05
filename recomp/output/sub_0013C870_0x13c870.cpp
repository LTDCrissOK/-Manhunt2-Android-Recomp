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

// Function: sub_0013C870
// Address: 0x13c870 - 0x13c8c0
void sub_0013C870_0x13c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C870_0x13c870");
#endif

    switch (ctx->pc) {
        case 0x13c870u: goto label_13c870;
        case 0x13c874u: goto label_13c874;
        case 0x13c878u: goto label_13c878;
        case 0x13c87cu: goto label_13c87c;
        case 0x13c880u: goto label_13c880;
        case 0x13c884u: goto label_13c884;
        case 0x13c888u: goto label_13c888;
        case 0x13c88cu: goto label_13c88c;
        case 0x13c890u: goto label_13c890;
        case 0x13c894u: goto label_13c894;
        case 0x13c898u: goto label_13c898;
        case 0x13c89cu: goto label_13c89c;
        case 0x13c8a0u: goto label_13c8a0;
        case 0x13c8a4u: goto label_13c8a4;
        case 0x13c8a8u: goto label_13c8a8;
        case 0x13c8acu: goto label_13c8ac;
        case 0x13c8b0u: goto label_13c8b0;
        case 0x13c8b4u: goto label_13c8b4;
        case 0x13c8b8u: goto label_13c8b8;
        case 0x13c8bcu: goto label_13c8bc;
        default: break;
    }

    ctx->pc = 0x13c870u;

label_13c870:
    // 0x13c870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13c874:
    // 0x13c874: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13c878:
    // 0x13c878: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c87c:
    // 0x13c87c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13c880:
    // 0x13c880: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13c880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13c884:
    // 0x13c884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13c888:
    // 0x13c888: 0xc041d52  jal         func_107548
label_13c88c:
    if (ctx->pc == 0x13C88Cu) {
        ctx->pc = 0x13C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C888u;
        // 0x13c88c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C890u;
        goto label_13c890;
    }
    ctx->pc = 0x13C888u;
    SET_GPR_U32(ctx, 31, 0x13C890u);
    ctx->pc = 0x13C88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C888u;
    // 0x13c88c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107548u, 0x13C888u, 0x13C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C890u;
label_13c890:
    // 0x13c890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c894:
    // 0x13c894: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x13c894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_13c898:
    // 0x13c898: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13c898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13c89c:
    // 0x13c89c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_13c8a0:
    // 0x13c8a0: 0x40f809  jalr        $v0
label_13c8a4:
    if (ctx->pc == 0x13C8A4u) {
        ctx->pc = 0x13C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8A0u;
        // 0x13c8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8A8u;
        goto label_13c8a8;
    }
    ctx->pc = 0x13C8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C8A8u);
        ctx->pc = 0x13C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8A0u;
        // 0x13c8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C8A0u, 0x13C8A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C8A8u;
label_13c8a8:
    // 0x13c8a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13c8a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c8ac:
    // 0x13c8ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c8acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13c8b0:
    // 0x13c8b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c8b4:
    // 0x13c8b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c8b8:
    // 0x13c8b8: 0x3e00008  jr          $ra
label_13c8bc:
    if (ctx->pc == 0x13C8BCu) {
        ctx->pc = 0x13C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8B8u;
        // 0x13c8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8C0u;
        goto label_fallthrough_0x13c8b8;
    }
    ctx->pc = 0x13C8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8B8u;
        // 0x13c8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13c8b8:
    ctx->pc = 0x13C8C0u;
}
