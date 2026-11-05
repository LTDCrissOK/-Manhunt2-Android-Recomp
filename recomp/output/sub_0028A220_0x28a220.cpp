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

// Function: sub_0028A220
// Address: 0x28a220 - 0x28a2a8
void sub_0028A220_0x28a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A220_0x28a220");
#endif

    switch (ctx->pc) {
        case 0x28a244u: goto label_28a244;
        case 0x28a260u: goto label_28a260;
        case 0x28a278u: goto label_28a278;
        case 0x28a288u: goto label_28a288;
        case 0x28a290u: goto label_28a290;
        default: break;
    }

    ctx->pc = 0x28a220u;

    // 0x28a220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28a224: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a22c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28a230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28a234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28a238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28a23c: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28A23Cu;
    SET_GPR_U32(ctx, 31, 0x28A244u);
    ctx->pc = 0x28A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A23Cu;
    // 0x28a240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28A23Cu, 0x28A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A244u;
label_28a244:
    // 0x28a244: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x28a244u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x28a248: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28a248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28a24c: 0x2610aed0  addiu       $s0, $s0, -0x5130
    ctx->pc = 0x28a24cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946512));
    // 0x28a250: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x28a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28a254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a258: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A258u;
    SET_GPR_U32(ctx, 31, 0x28A260u);
    ctx->pc = 0x28A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A258u;
    // 0x28a25c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A258u, 0x28A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A260u;
label_28a260:
    // 0x28a260: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x28a260u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x28a264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a268: 0x2631dce0  addiu       $s1, $s1, -0x2320
    ctx->pc = 0x28a268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958304));
    // 0x28a26c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a270: 0xc0b6e0e  jal         func_2DB838
    ctx->pc = 0x28A270u;
    SET_GPR_U32(ctx, 31, 0x28A278u);
    ctx->pc = 0x28A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A270u;
    // 0x28a274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB838u, 0x28A270u, 0x28A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A278u;
label_28a278:
    // 0x28a278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a27c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a280: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28A280u;
    SET_GPR_U32(ctx, 31, 0x28A288u);
    ctx->pc = 0x28A284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A280u;
    // 0x28a284: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28A280u, 0x28A288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A288u;
label_28a288:
    // 0x28a288: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28A288u;
    SET_GPR_U32(ctx, 31, 0x28A290u);
    ctx->pc = 0x28A28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A288u;
    // 0x28a28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28A288u, 0x28A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A290u;
label_28a290:
    // 0x28a290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a294: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28a294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a298: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28a298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a29c: 0x3e00008  jr          $ra
    ctx->pc = 0x28A29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A29Cu;
        // 0x28a2a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A2A4u;
    // 0x28a2a4: 0x0  nop
    ctx->pc = 0x28a2a4u;
    // NOP
    ctx->pc = 0x28a2a8u;
}
