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

// Function: sub_0035D0F0
// Address: 0x35d0f0 - 0x35d170
void sub_0035D0F0_0x35d0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D0F0_0x35d0f0");
#endif

    switch (ctx->pc) {
        case 0x35d124u: goto label_35d124;
        case 0x35d130u: goto label_35d130;
        case 0x35d140u: goto label_35d140;
        default: break;
    }

    ctx->pc = 0x35d0f0u;

    // 0x35d0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d0f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d0f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d0fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d100: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35d100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35d104: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35d104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d108: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35d10c: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x35d10cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35d110: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x35d110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x35d114: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35D114u;
    {
        const bool branch_taken_0x35d114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D114u;
        // 0x35d118: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d114) {
            ctx->pc = 0x35D130u;
            goto label_35d130;
        }
    }
    ctx->pc = 0x35D11Cu;
    // 0x35d11c: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x35D11Cu;
    SET_GPR_U32(ctx, 31, 0x35D124u);
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x35D11Cu, 0x35D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D124u;
label_35d124:
    // 0x35d124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d128: 0xc0d73a6  jal         func_35CE98
    ctx->pc = 0x35D128u;
    SET_GPR_U32(ctx, 31, 0x35D130u);
    ctx->pc = 0x35D12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D128u;
    // 0x35d12c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE98u, 0x35D128u, 0x35D130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D130u;
label_35d130:
    // 0x35d130: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x35d130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d134: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35d134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d138: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x35D138u;
    SET_GPR_U32(ctx, 31, 0x35D140u);
    ctx->pc = 0x35D13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D138u;
    // 0x35d13c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x35D138u, 0x35D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D140u;
label_35d140:
    // 0x35d140: 0xa6110004  sh          $s1, 0x4($s0)
    ctx->pc = 0x35d140u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x35d144: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x35d144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x35d148: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35d148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d14c: 0x9044caf0  lbu         $a0, -0x3510($v0)
    ctx->pc = 0x35d14cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3FCAF0u));
    // 0x35d150: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x35d150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x35d154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d158: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d15c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35d15cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d160: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35d160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35d164: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35d164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35d168: 0x3e00008  jr          $ra
    ctx->pc = 0x35D168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D168u;
        // 0x35d16c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D170u;
}
