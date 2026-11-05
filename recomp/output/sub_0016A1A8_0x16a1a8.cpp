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

// Function: sub_0016A1A8
// Address: 0x16a1a8 - 0x16a258
void sub_0016A1A8_0x16a1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A1A8_0x16a1a8");
#endif

    switch (ctx->pc) {
        case 0x16a1f4u: goto label_16a1f4;
        case 0x16a208u: goto label_16a208;
        case 0x16a210u: goto label_16a210;
        case 0x16a234u: goto label_16a234;
        default: break;
    }

    ctx->pc = 0x16a1a8u;

    // 0x16a1a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16a1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16a1ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a1b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16a1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16a1b4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x16a1b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1b8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x16a1b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1bc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x16a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16a1c0: 0x2711026  xor         $v0, $s3, $s1
    ctx->pc = 0x16a1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 17));
    // 0x16a1c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a1c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16a1cc: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x16a1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16a1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16a1d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1d8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x16a1d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x16a1dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16a1dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16a1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16a1e4: 0x102880b  movn        $s1, $t0, $v0
    ctx->pc = 0x16a1e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
    // 0x16a1e8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x16a1e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1ec: 0xc05ab66  jal         func_16AD98
    ctx->pc = 0x16A1ECu;
    SET_GPR_U32(ctx, 31, 0x16A1F4u);
    ctx->pc = 0x16A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A1ECu;
    // 0x16a1f0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AD98u, 0x16A1ECu, 0x16A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A1F4u;
label_16a1f4:
    // 0x16a1f4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x16a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16a1f8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A1F8u;
    {
        const bool branch_taken_0x16a1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1F8u;
        // 0x16a1fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1f8) {
            ctx->pc = 0x16A208u;
            goto label_16a208;
        }
    }
    ctx->pc = 0x16A200u;
    // 0x16a200: 0xc05a824  jal         func_16A090
    ctx->pc = 0x16A200u;
    SET_GPR_U32(ctx, 31, 0x16A208u);
    ctx->pc = 0x16A204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A200u;
    // 0x16a204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A090u, 0x16A200u, 0x16A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A208u;
label_16a208:
    // 0x16a208: 0xc05abc8  jal         func_16AF20
    ctx->pc = 0x16A208u;
    SET_GPR_U32(ctx, 31, 0x16A210u);
    ctx->pc = 0x16A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A208u;
    // 0x16a20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF20u, 0x16A208u, 0x16A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A210u;
label_16a210:
    // 0x16a210: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16a210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16a214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a218: 0xa4530014  sh          $s3, 0x14($v0)
    ctx->pc = 0x16a218u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 19));
    // 0x16a21c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16a21cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x16a220: 0xa4510016  sh          $s1, 0x16($v0)
    ctx->pc = 0x16a220u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 17));
    // 0x16a224: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a228: 0xac540018  sw          $s4, 0x18($v0)
    ctx->pc = 0x16a228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 20));
    // 0x16a22c: 0xc05a926  jal         func_16A498
    ctx->pc = 0x16A22Cu;
    SET_GPR_U32(ctx, 31, 0x16A234u);
    ctx->pc = 0x16A230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A22Cu;
    // 0x16a230: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A498u, 0x16A22Cu, 0x16A234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A234u;
label_16a234:
    // 0x16a234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a238: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a23c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a23cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a240: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16a240u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a244: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16a244u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a248: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16a248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16a24c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x16a24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16a250: 0x3e00008  jr          $ra
    ctx->pc = 0x16A250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A250u;
        // 0x16a254: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A258u;
}
