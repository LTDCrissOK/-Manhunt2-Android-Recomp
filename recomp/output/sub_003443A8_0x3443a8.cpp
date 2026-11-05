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

// Function: sub_003443A8
// Address: 0x3443a8 - 0x344458
void sub_003443A8_0x3443a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003443A8_0x3443a8");
#endif

    switch (ctx->pc) {
        case 0x3443dcu: goto label_3443dc;
        case 0x3443e4u: goto label_3443e4;
        case 0x3443f4u: goto label_3443f4;
        case 0x344400u: goto label_344400;
        case 0x34442cu: goto label_34442c;
        case 0x344434u: goto label_344434;
        default: break;
    }

    ctx->pc = 0x3443a8u;

    // 0x3443a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3443a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3443ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3443acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3443b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3443b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3443b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3443b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3443b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3443b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3443bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3443bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3443c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3443c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3443c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3443c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3443c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3443c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3443cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3443ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3443d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3443d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3443d4: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x3443D4u;
    SET_GPR_U32(ctx, 31, 0x3443DCu);
    ctx->pc = 0x3443D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3443D4u;
    // 0x3443d8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x3443D4u, 0x3443DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3443DCu;
label_3443dc:
    // 0x3443dc: 0xc0d1026  jal         func_344098
    ctx->pc = 0x3443DCu;
    SET_GPR_U32(ctx, 31, 0x3443E4u);
    ctx->pc = 0x344098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344098u, 0x3443DCu, 0x3443E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3443E4u;
label_3443e4:
    // 0x3443e4: 0x92120002  lbu         $s2, 0x2($s0)
    ctx->pc = 0x3443e4u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3443e8: 0x92140000  lbu         $s4, 0x0($s0)
    ctx->pc = 0x3443e8u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3443ec: 0xc0db234  jal         func_36C8D0
    ctx->pc = 0x3443ECu;
    SET_GPR_U32(ctx, 31, 0x3443F4u);
    ctx->pc = 0x3443F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3443ECu;
    // 0x3443f0: 0x92150001  lbu         $s5, 0x1($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C8D0u, 0x3443ECu, 0x3443F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3443F4u;
label_3443f4:
    // 0x3443f4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3443f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3443f8: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x3443F8u;
    SET_GPR_U32(ctx, 31, 0x344400u);
    ctx->pc = 0x3443FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3443F8u;
    // 0x3443fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3443F8u, 0x344400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344400u;
label_344400:
    // 0x344400: 0xc62f0064  lwc1        $f15, 0x64($s1)
    ctx->pc = 0x344400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x344404: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x344404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344408: 0xc62c0058  lwc1        $f12, 0x58($s1)
    ctx->pc = 0x344408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34440c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x34440cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344410: 0xc62d005c  lwc1        $f13, 0x5C($s1)
    ctx->pc = 0x344410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x344414: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x344414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344418: 0xc62e0060  lwc1        $f14, 0x60($s1)
    ctx->pc = 0x344418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x34441c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x34441cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344420: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x344420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344424: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x344424u;
    SET_GPR_U32(ctx, 31, 0x34442Cu);
    ctx->pc = 0x344428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344424u;
    // 0x344428: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x344424u, 0x34442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34442Cu;
label_34442c:
    // 0x34442c: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x34442Cu;
    SET_GPR_U32(ctx, 31, 0x344434u);
    ctx->pc = 0x344430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34442Cu;
    // 0x344430: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x34442Cu, 0x344434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344434u;
label_344434:
    // 0x344434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344438: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x344438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34443c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34443cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344440: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x344440u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x344444: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x344444u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344448: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x344448u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34444c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34444cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x344450: 0x3e00008  jr          $ra
    ctx->pc = 0x344450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344450u;
        // 0x344454: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344458u;
}
