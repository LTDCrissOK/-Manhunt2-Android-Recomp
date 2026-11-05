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

// Function: sub_00278090
// Address: 0x278090 - 0x278158
void sub_00278090_0x278090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278090_0x278090");
#endif

    switch (ctx->pc) {
        case 0x278130u: goto label_278130;
        default: break;
    }

    ctx->pc = 0x278090u;

    // 0x278090: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x278090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x278094: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x278094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x278098: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x278098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x27809c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x27809cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2780a0: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2780a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780a4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2780a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2780a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2780a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780ac: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2780acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2780b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2780b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780b4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2780b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x2780b8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2780b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780bc: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2780bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x2780c0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2780c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780c4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2780c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2780c8: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2780c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780cc: 0x8fb000c0  lw          $s0, 0xC0($sp)
    ctx->pc = 0x2780ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2780d0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2780d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2780d4: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x2780d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x2780d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2780d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780dc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2780dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2780e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2780e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780e4: 0x8fac00d0  lw          $t4, 0xD0($sp)
    ctx->pc = 0x2780e4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2780e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2780e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2780ec: 0x8fad00d8  lw          $t5, 0xD8($sp)
    ctx->pc = 0x2780ecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2780f0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2780f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780f4: 0x8fae00e0  lw          $t6, 0xE0($sp)
    ctx->pc = 0x2780f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2780f8: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2780f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780fc: 0x8faf00e8  lw          $t7, 0xE8($sp)
    ctx->pc = 0x2780fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x278100: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x278100u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278104: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x278104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x278108: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x278108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27810c: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x27810cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x278110: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x278110u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278114: 0x24a58368  addiu       $a1, $a1, -0x7C98
    ctx->pc = 0x278114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935400));
    // 0x278118: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x278118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x27811c: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x27811cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    // 0x278120: 0xafad0020  sw          $t5, 0x20($sp)
    ctx->pc = 0x278120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 13));
    // 0x278124: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x278124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x278128: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x278128u;
    SET_GPR_U32(ctx, 31, 0x278130u);
    ctx->pc = 0x27812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278128u;
    // 0x27812c: 0xafaf0030  sw          $t7, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x278128u, 0x278130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278130u;
label_278130:
    // 0x278130: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x278130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x278134: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x278134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x278138: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x278138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27813c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x27813cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x278140: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x278140u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x278144: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x278144u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x278148: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x278148u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27814c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x27814cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x278150: 0x3e00008  jr          $ra
    ctx->pc = 0x278150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278150u;
        // 0x278154: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278158u;
}
