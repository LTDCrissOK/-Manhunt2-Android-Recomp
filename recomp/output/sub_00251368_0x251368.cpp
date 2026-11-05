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

// Function: sub_00251368
// Address: 0x251368 - 0x2513d8
void sub_00251368_0x251368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251368_0x251368");
#endif

    switch (ctx->pc) {
        case 0x25139cu: goto label_25139c;
        case 0x2513a4u: goto label_2513a4;
        case 0x2513c4u: goto label_2513c4;
        default: break;
    }

    ctx->pc = 0x251368u;

    // 0x251368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25136c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25136cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251370: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x251370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x251374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x251374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251378: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x251378u;
    {
        const bool branch_taken_0x251378 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251378u;
        // 0x25137c: 0xae051004  sw          $a1, 0x1004($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251378) {
            ctx->pc = 0x25139Cu;
            goto label_25139c;
        }
    }
    ctx->pc = 0x251380u;
    // 0x251380: 0x26041040  addiu       $a0, $s0, 0x1040
    ctx->pc = 0x251380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4160));
    // 0x251384: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x251384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x251388: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x251388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x25138c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25138Cu;
    {
        const bool branch_taken_0x25138c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25138c) {
            ctx->pc = 0x25139Cu;
            goto label_25139c;
        }
    }
    ctx->pc = 0x251394u;
    // 0x251394: 0xc06fb2a  jal         func_1BECA8
    ctx->pc = 0x251394u;
    SET_GPR_U32(ctx, 31, 0x25139Cu);
    ctx->pc = 0x1BECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECA8u, 0x251394u, 0x25139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25139Cu;
label_25139c:
    // 0x25139c: 0xc094d84  jal         func_253610
    ctx->pc = 0x25139Cu;
    SET_GPR_U32(ctx, 31, 0x2513A4u);
    ctx->pc = 0x2513A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25139Cu;
    // 0x2513a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253610u, 0x25139Cu, 0x2513A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2513A4u;
label_2513a4:
    // 0x2513a4: 0x8e031004  lw          $v1, 0x1004($s0)
    ctx->pc = 0x2513a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    // 0x2513a8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2513A8u;
    {
        const bool branch_taken_0x2513a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2513a8) {
            ctx->pc = 0x2513ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2513A8u;
            // 0x2513ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2513C8u;
            goto label_2513c8;
        }
    }
    ctx->pc = 0x2513B0u;
    // 0x2513b0: 0x8e020ff8  lw          $v0, 0xFF8($s0)
    ctx->pc = 0x2513b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x2513b4: 0xac43011c  sw          $v1, 0x11C($v0)
    ctx->pc = 0x2513b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 3));
    // 0x2513b8: 0x8e040ff8  lw          $a0, 0xFF8($s0)
    ctx->pc = 0x2513b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x2513bc: 0xc072a14  jal         func_1CA850
    ctx->pc = 0x2513BCu;
    SET_GPR_U32(ctx, 31, 0x2513C4u);
    ctx->pc = 0x2513C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2513BCu;
    // 0x2513c0: 0x24840110  addiu       $a0, $a0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA850u, 0x2513BCu, 0x2513C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2513C4u;
label_2513c4:
    // 0x2513c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2513c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2513c8:
    // 0x2513c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2513c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2513cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2513CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2513D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2513CCu;
        // 0x2513d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2513CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2513D4u;
    // 0x2513d4: 0x0  nop
    ctx->pc = 0x2513d4u;
    // NOP
    ctx->pc = 0x2513d8u;
}
