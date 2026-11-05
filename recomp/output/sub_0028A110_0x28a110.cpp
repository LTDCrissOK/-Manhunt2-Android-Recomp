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

// Function: sub_0028A110
// Address: 0x28a110 - 0x28a190
void sub_0028A110_0x28a110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A110_0x28a110");
#endif

    switch (ctx->pc) {
        case 0x28a130u: goto label_28a130;
        case 0x28a148u: goto label_28a148;
        case 0x28a164u: goto label_28a164;
        case 0x28a174u: goto label_28a174;
        case 0x28a17cu: goto label_28a17c;
        default: break;
    }

    ctx->pc = 0x28a110u;

    // 0x28a110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a114: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a11c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a120: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a128: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28A128u;
    SET_GPR_U32(ctx, 31, 0x28A130u);
    ctx->pc = 0x28A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A128u;
    // 0x28a12c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28A128u, 0x28A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A130u;
label_28a130:
    // 0x28a130: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28a130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28a134: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a138: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x28a138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28a13c: 0x24a5aec8  addiu       $a1, $a1, -0x5138
    ctx->pc = 0x28a13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946504));
    // 0x28a140: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A140u;
    SET_GPR_U32(ctx, 31, 0x28A148u);
    ctx->pc = 0x28A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A140u;
    // 0x28a144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A140u, 0x28A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A148u;
label_28a148:
    // 0x28a148: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x28a148u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28a14c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28a14cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a150: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28a150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28a154: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a15c: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28A15Cu;
    SET_GPR_U32(ctx, 31, 0x28A164u);
    ctx->pc = 0x28A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A15Cu;
    // 0x28a160: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28A15Cu, 0x28A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A164u;
label_28a164:
    // 0x28a164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a168: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a16c: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28A16Cu;
    SET_GPR_U32(ctx, 31, 0x28A174u);
    ctx->pc = 0x28A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A16Cu;
    // 0x28a170: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28A16Cu, 0x28A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A174u;
label_28a174:
    // 0x28a174: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28A174u;
    SET_GPR_U32(ctx, 31, 0x28A17Cu);
    ctx->pc = 0x28A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A174u;
    // 0x28a178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28A174u, 0x28A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A17Cu;
label_28a17c:
    // 0x28a17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a180: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a184: 0x3e00008  jr          $ra
    ctx->pc = 0x28A184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A184u;
        // 0x28a188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A18Cu;
    // 0x28a18c: 0x0  nop
    ctx->pc = 0x28a18cu;
    // NOP
    ctx->pc = 0x28a190u;
}
