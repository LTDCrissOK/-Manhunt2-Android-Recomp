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

// Function: sub_00178140
// Address: 0x178140 - 0x1781b0
void sub_00178140_0x178140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178140_0x178140");
#endif

    switch (ctx->pc) {
        case 0x178174u: goto label_178174;
        case 0x178180u: goto label_178180;
        case 0x17818cu: goto label_17818c;
        case 0x178198u: goto label_178198;
        default: break;
    }

    ctx->pc = 0x178140u;

    // 0x178140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178144: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178148: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17814c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17814cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178150: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x178150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x178154: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x178154u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x178158: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17815c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17815cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x178160: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178164: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x178164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x178168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17816c: 0xc05e034  jal         func_1780D0
    ctx->pc = 0x17816Cu;
    SET_GPR_U32(ctx, 31, 0x178174u);
    ctx->pc = 0x178170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17816Cu;
    // 0x178170: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D0u, 0x17816Cu, 0x178174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178174u;
label_178174:
    // 0x178174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178178: 0xc05e128  jal         func_1784A0
    ctx->pc = 0x178178u;
    SET_GPR_U32(ctx, 31, 0x178180u);
    ctx->pc = 0x17817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178178u;
    // 0x17817c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784A0u, 0x178178u, 0x178180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178180u;
label_178180:
    // 0x178180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178184: 0xc05e312  jal         func_178C48
    ctx->pc = 0x178184u;
    SET_GPR_U32(ctx, 31, 0x17818Cu);
    ctx->pc = 0x178188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178184u;
    // 0x178188: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178C48u, 0x178184u, 0x17818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17818Cu;
label_17818c:
    // 0x17818c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178190: 0xc05e02e  jal         func_1780B8
    ctx->pc = 0x178190u;
    SET_GPR_U32(ctx, 31, 0x178198u);
    ctx->pc = 0x178194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178190u;
    // 0x178194: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780B8u, 0x178190u, 0x178198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178198u;
label_178198:
    // 0x178198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17819c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17819cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1781a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1781a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1781a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1781a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1781a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1781A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1781ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781A8u;
        // 0x1781ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1781A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1781B0u;
}
