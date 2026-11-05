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

// Function: sub_003855C8
// Address: 0x3855c8 - 0x385690
void sub_003855C8_0x3855c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003855C8_0x3855c8");
#endif

    switch (ctx->pc) {
        case 0x3855d0u: goto label_3855d0;
        case 0x3855e0u: goto label_3855e0;
        case 0x385648u: goto label_385648;
        default: break;
    }

    ctx->pc = 0x3855c8u;

    // 0x3855c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3855c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3855cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3855ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3855d0:
    // 0x3855d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3855d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3855d4: 0xac820828  sw          $v0, 0x828($a0)
    ctx->pc = 0x3855d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2088), GPR_U32(ctx, 2));
    // 0x3855d8: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3855D8u;
    SET_GPR_U32(ctx, 31, 0x3855E0u);
    ctx->pc = 0x3855DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3855D8u;
    // 0x3855dc: 0xac8001c0  sw          $zero, 0x1C0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3855D8u, 0x3855E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3855E0u;
label_3855e0:
    // 0x3855e0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3855e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3855e4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x3855e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x3855e8: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x3855e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x3855ec: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x3855ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x3855f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3855f0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x3855f4: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x3855f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x3855f8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3855f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3855fc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3855fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x385600: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x385600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x385604: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x385604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x385608: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x385608u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x38560c: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x38560cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x385610: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x385610u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0)); // MMIO: 0x1000b000
    // 0x385614: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x385614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x385618: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x385618u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 0)); // MMIO: 0x1000b400
    // 0x38561c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x38561cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x385620: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x385620u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 0)); // MMIO: 0x1000d400
    // 0x385624: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x385624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x385628: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x385628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x38562c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x38562cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x385630: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x385630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x385634: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x385634u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x385638: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385638u;
    {
        const bool branch_taken_0x385638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385638u;
        // 0x38563c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385638) {
            ctx->pc = 0x38564Cu;
            goto label_38564c;
        }
    }
    ctx->pc = 0x385640u;
    // 0x385640: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x385640u;
    SET_GPR_U32(ctx, 31, 0x385648u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x385640u, 0x385648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385648u;
label_385648:
    // 0x385648: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x385648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_38564c:
    // 0x38564c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x38564cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x385650: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x385650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x385654: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x385654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x385658: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x385658u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x1000b020
    // 0x38565c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38565cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x385660: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x385660u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x385664: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x385664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x385668: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x385668u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0)); // MMIO: 0x1000d420
    // 0x38566c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38566cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x385670: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x385670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x385674: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x385674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x385678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38567c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38567cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385680: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x385680u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3)); // MMIO: 0x10002010
    // 0x385684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x385684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385688: 0x80ef914  j           func_3BE450
    ctx->pc = 0x385688u;
    ctx->pc = 0x38568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385688u;
    // 0x38568c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE450u, 0x385688u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x385690u;
}
