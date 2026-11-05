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

// Function: sub_0036DE40
// Address: 0x36de40 - 0x36dec0
void sub_0036DE40_0x36de40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DE40_0x36de40");
#endif

    switch (ctx->pc) {
        case 0x36de6cu: goto label_36de6c;
        case 0x36de9cu: goto label_36de9c;
        default: break;
    }

    ctx->pc = 0x36de40u;

    // 0x36de40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36de40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36de44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36de44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36de48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36de48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36de4c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x36de4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36de50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36de54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36de54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x36de58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de5c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36de5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36de60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36de60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de64: 0xc0db760  jal         func_36DD80
    ctx->pc = 0x36DE64u;
    SET_GPR_U32(ctx, 31, 0x36DE6Cu);
    ctx->pc = 0x36DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE64u;
    // 0x36de68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36DD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DD80u, 0x36DE64u, 0x36DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE6Cu;
label_36de6c:
    // 0x36de6c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36de70: 0x9043cbe8  lbu         $v1, -0x3418($v0)
    ctx->pc = 0x36de70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FCBE8u));
    // 0x36de74: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x36DE74u;
    {
        const bool branch_taken_0x36de74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DE74u;
        // 0x36de78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36de74) {
            ctx->pc = 0x36DEA0u;
            goto label_36dea0;
        }
    }
    ctx->pc = 0x36DE7Cu;
    // 0x36de7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36de7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36de80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de84: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x36de84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36de88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36de8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36de90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de94: 0xc0db678  jal         func_36D9E0
    ctx->pc = 0x36DE94u;
    SET_GPR_U32(ctx, 31, 0x36DE9Cu);
    ctx->pc = 0x36DE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE94u;
    // 0x36de98: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D9E0u, 0x36DE94u, 0x36DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE9Cu;
label_36de9c:
    // 0x36de9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36dea0:
    // 0x36dea0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36dea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dea4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36dea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36dea8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36dea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36deac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36deacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36deb0: 0x3e00008  jr          $ra
    ctx->pc = 0x36DEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DEB0u;
        // 0x36deb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DEB8u;
    // 0x36deb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x36deb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36debc: 0x0  nop
    ctx->pc = 0x36debcu;
    // NOP
    ctx->pc = 0x36dec0u;
}
