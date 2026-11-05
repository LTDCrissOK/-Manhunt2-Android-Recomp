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

// Function: sub_0037A200
// Address: 0x37a200 - 0x37a290
void sub_0037A200_0x37a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A200_0x37a200");
#endif

    switch (ctx->pc) {
        case 0x37a230u: goto label_37a230;
        case 0x37a26cu: goto label_37a26c;
        default: break;
    }

    ctx->pc = 0x37a200u;

    // 0x37a200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37a200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37a204: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x37a204u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37a208: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x37a208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x37a20c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37a20cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a210: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x37a210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x37a214: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x37a214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x37a218: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37a218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a21c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x37a21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x37a220: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37a220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a224: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x37a224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x37a228: 0xc0df52a  jal         func_37D4A8
    ctx->pc = 0x37A228u;
    SET_GPR_U32(ctx, 31, 0x37A230u);
    ctx->pc = 0x37A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A228u;
    // 0x37a22c: 0x26510010  addiu       $s1, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D4A8u, 0x37A228u, 0x37A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A230u;
label_37a230:
    // 0x37a230: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x37a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37a234: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x37a234u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37a238: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x37a238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37a23c: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x37a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x37a240: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x37a240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37a244: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x37a244u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x37a248: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x37a248u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x37a24c: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x37a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x37a250: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x37a250u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x37a254: 0x2118821  addu        $s1, $s0, $s1
    ctx->pc = 0x37a254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x37a258: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x37a258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x37a25c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x37a25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x37a260: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x37a260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37a264: 0xc0dd720  jal         func_375C80
    ctx->pc = 0x37A264u;
    SET_GPR_U32(ctx, 31, 0x37A26Cu);
    ctx->pc = 0x37A268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A264u;
    // 0x37a268: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x375C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C80u, 0x37A264u, 0x37A26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A26Cu;
label_37a26c:
    // 0x37a26c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a270: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x37a270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a274: 0xae420090  sw          $v0, 0x90($s2)
    ctx->pc = 0x37a274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    // 0x37a278: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x37a278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37a27c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x37a27cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a280: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x37a280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37a284: 0x3e00008  jr          $ra
    ctx->pc = 0x37A284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A284u;
        // 0x37a288: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A28Cu;
    // 0x37a28c: 0x0  nop
    ctx->pc = 0x37a28cu;
    // NOP
    ctx->pc = 0x37a290u;
}
