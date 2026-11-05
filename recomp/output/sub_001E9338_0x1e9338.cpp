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

// Function: sub_001E9338
// Address: 0x1e9338 - 0x1e93d0
void sub_001E9338_0x1e9338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9338_0x1e9338");
#endif

    switch (ctx->pc) {
        case 0x1e9358u: goto label_1e9358;
        case 0x1e938cu: goto label_1e938c;
        default: break;
    }

    ctx->pc = 0x1e9338u;

    // 0x1e9338: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e933c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e933cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e9340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9344: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e9344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e9348: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e9348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e934c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1e934cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e9350: 0xc07a592  jal         func_1E9648
    ctx->pc = 0x1E9350u;
    SET_GPR_U32(ctx, 31, 0x1E9358u);
    ctx->pc = 0x1E9354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9350u;
    // 0x1e9354: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x1E9350u, 0x1E9358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9358u;
label_1e9358:
    // 0x1e9358: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e9358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e935c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1e935cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1e9360: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e9360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e9364: 0x8c652b20  lw          $a1, 0x2B20($v1)
    ctx->pc = 0x1e9364u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B20u));
    // 0x1e9368: 0xc440d9b8  lwc1        $f0, -0x2648($v0)
    ctx->pc = 0x1e9368u;
    { uint32_t bits = FAST_READ32(0x45D9B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e936c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e936cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9370: 0x8e222b1c  lw          $v0, 0x2B1C($s1)
    ctx->pc = 0x1e9370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11036)));
    // 0x1e9374: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e9374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9378: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e9378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e937c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e937cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9380: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e9380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e9384: 0xc07a4f4  jal         func_1E93D0
    ctx->pc = 0x1E9384u;
    SET_GPR_U32(ctx, 31, 0x1E938Cu);
    ctx->pc = 0x1E9388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9384u;
    // 0x1e9388: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E93D0u, 0x1E9384u, 0x1E938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E938Cu;
label_1e938c:
    // 0x1e938c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e938cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9390: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9390u;
    {
        const bool branch_taken_0x1e9390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9390u;
        // 0x1e9394: 0x8e222b1c  lw          $v0, 0x2B1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9390) {
            ctx->pc = 0x1E93A0u;
            goto label_1e93a0;
        }
    }
    ctx->pc = 0x1E9398u;
    // 0x1e9398: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e9398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e939c: 0xae222b1c  sw          $v0, 0x2B1C($s1)
    ctx->pc = 0x1e939cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11036), GPR_U32(ctx, 2));
label_1e93a0:
    // 0x1e93a0: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E93A0u;
    {
        const bool branch_taken_0x1e93a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93A0u;
        // 0x1e93a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e93a0) {
            ctx->pc = 0x1E93B0u;
            goto label_1e93b0;
        }
    }
    ctx->pc = 0x1E93A8u;
    // 0x1e93a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E93A8u;
    {
        const bool branch_taken_0x1e93a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93A8u;
        // 0x1e93ac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e93a8) {
            ctx->pc = 0x1E93B8u;
            goto label_1e93b8;
        }
    }
    ctx->pc = 0x1E93B0u;
label_1e93b0:
    // 0x1e93b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e93b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e93b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e93b8:
    // 0x1e93b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e93b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e93bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e93bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e93c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e93c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e93c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E93C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93C4u;
        // 0x1e93c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E93C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E93CCu;
    // 0x1e93cc: 0x0  nop
    ctx->pc = 0x1e93ccu;
    // NOP
    ctx->pc = 0x1e93d0u;
}
