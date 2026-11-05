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

// Function: sub_001CD7A0
// Address: 0x1cd7a0 - 0x1cd820
void sub_001CD7A0_0x1cd7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD7A0_0x1cd7a0");
#endif

    switch (ctx->pc) {
        case 0x1cd7ccu: goto label_1cd7cc;
        case 0x1cd7dcu: goto label_1cd7dc;
        case 0x1cd7e8u: goto label_1cd7e8;
        case 0x1cd80cu: goto label_1cd80c;
        default: break;
    }

    ctx->pc = 0x1cd7a0u;

    // 0x1cd7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd7a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cd7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cd7a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd7ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cd7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd7b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cd7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cd7b4: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1cd7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1cd7b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cd7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cd7bc: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x1cd7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1cd7c0: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1cd7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd7c4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1CD7C4u;
    SET_GPR_U32(ctx, 31, 0x1CD7CCu);
    ctx->pc = 0x1CD7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7C4u;
    // 0x1cd7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1CD7C4u, 0x1CD7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7CCu;
label_1cd7cc:
    // 0x1cd7cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD7CCu;
    {
        const bool branch_taken_0x1cd7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd7cc) {
            ctx->pc = 0x1CD7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD7CCu;
            // 0x1cd7d0: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD7E0u;
            goto label_1cd7e0;
        }
    }
    ctx->pc = 0x1CD7D4u;
    // 0x1cd7d4: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1CD7D4u;
    SET_GPR_U32(ctx, 31, 0x1CD7DCu);
    ctx->pc = 0x1CD7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7D4u;
    // 0x1cd7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1CD7D4u, 0x1CD7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7DCu;
label_1cd7dc:
    // 0x1cd7dc: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x1cd7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_1cd7e0:
    // 0x1cd7e0: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x1CD7E0u;
    SET_GPR_U32(ctx, 31, 0x1CD7E8u);
    ctx->pc = 0x1CD7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7E0u;
    // 0x1cd7e4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x1CD7E0u, 0x1CD7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7E8u;
label_1cd7e8:
    // 0x1cd7e8: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x1cd7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1cd7ec: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x1cd7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x1cd7f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd7f4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1cd7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1cd7f8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cd7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd7fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cd7fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cd800: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1cd800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cd804: 0xc076f7c  jal         func_1DBDF0
    ctx->pc = 0x1CD804u;
    SET_GPR_U32(ctx, 31, 0x1CD80Cu);
    ctx->pc = 0x1CD808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD804u;
    // 0x1cd808: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBDF0u, 0x1CD804u, 0x1CD80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD80Cu;
label_1cd80c:
    // 0x1cd80c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd80cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cd814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd818: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD818u;
        // 0x1cd81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD820u;
}
