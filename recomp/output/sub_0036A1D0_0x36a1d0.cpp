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

// Function: sub_0036A1D0
// Address: 0x36a1d0 - 0x36a280
void sub_0036A1D0_0x36a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A1D0_0x36a1d0");
#endif

    switch (ctx->pc) {
        case 0x36a228u: goto label_36a228;
        case 0x36a230u: goto label_36a230;
        case 0x36a254u: goto label_36a254;
        case 0x36a25cu: goto label_36a25c;
        default: break;
    }

    ctx->pc = 0x36a1d0u;

    // 0x36a1d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36a1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36a1d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x36a1d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x36a1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x36a1dc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x36a1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a1e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x36a1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x36a1e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36a1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a1e8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x36a1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x36a1ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x36a1ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a1f0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x36a1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x36a1f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x36a1f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a1f8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x36a1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x36a1fc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x36a1fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a200: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x36a200u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36a204: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x36a204u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36a208: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x36a208u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36a20c: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36A20Cu;
    {
        const bool branch_taken_0x36a20c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A20Cu;
        // 0x36a210: 0xe7af000c  swc1        $f15, 0xC($sp) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a20c) {
            ctx->pc = 0x36A228u;
            goto label_36a228;
        }
    }
    ctx->pc = 0x36A214u;
    // 0x36a214: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x36a214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a218: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x36a218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x36a21c: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x36a21cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x36a220: 0xc0a1816  jal         func_286058
    ctx->pc = 0x36A220u;
    SET_GPR_U32(ctx, 31, 0x36A228u);
    ctx->pc = 0x36A224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A220u;
    // 0x36a224: 0x37a7000c  ori         $a3, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x286058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286058u, 0x36A220u, 0x36A228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A228u;
label_36a228:
    // 0x36a228: 0xc0da81e  jal         func_36A078
    ctx->pc = 0x36A228u;
    SET_GPR_U32(ctx, 31, 0x36A230u);
    ctx->pc = 0x36A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A228u;
    // 0x36a22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A078u, 0x36A228u, 0x36A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A230u;
label_36a230:
    // 0x36a230: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x36a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36a234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36a234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a238: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x36a238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36a23c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36a23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a240: 0xc7ae0008  lwc1        $f14, 0x8($sp)
    ctx->pc = 0x36a240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36a244: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36a244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a248: 0xc7af000c  lwc1        $f15, 0xC($sp)
    ctx->pc = 0x36a248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x36a24c: 0xc0da830  jal         func_36A0C0
    ctx->pc = 0x36A24Cu;
    SET_GPR_U32(ctx, 31, 0x36A254u);
    ctx->pc = 0x36A250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A24Cu;
    // 0x36a250: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0C0u, 0x36A24Cu, 0x36A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A254u;
label_36a254:
    // 0x36a254: 0xc0da828  jal         func_36A0A0
    ctx->pc = 0x36A254u;
    SET_GPR_U32(ctx, 31, 0x36A25Cu);
    ctx->pc = 0x36A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0A0u, 0x36A254u, 0x36A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A25Cu;
label_36a25c:
    // 0x36a25c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36a25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a260: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x36a260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36a264: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x36a264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a268: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x36a268u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36a26c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x36a26cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36a270: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x36a270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36a274: 0x3e00008  jr          $ra
    ctx->pc = 0x36A274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A274u;
        // 0x36a278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A27Cu;
    // 0x36a27c: 0x0  nop
    ctx->pc = 0x36a27cu;
    // NOP
    ctx->pc = 0x36a280u;
}
