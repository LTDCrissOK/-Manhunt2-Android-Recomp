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

// Function: sub_001DE138
// Address: 0x1de138 - 0x1de1e0
void sub_001DE138_0x1de138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE138_0x1de138");
#endif

    switch (ctx->pc) {
        case 0x1de1acu: goto label_1de1ac;
        case 0x1de1c0u: goto label_1de1c0;
        default: break;
    }

    ctx->pc = 0x1de138u;

    // 0x1de138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de13c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de140: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de144: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1de144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de148: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de14c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1de14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de150: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1de150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de154: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1de154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1de158: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x1de158u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x1de15c: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x1de15cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x1de160: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1de160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1de164: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1de164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1de168: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1de168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1de16c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1de16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de170: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1de170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1de174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de178: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1de178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1de17c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de180: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1de180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1de184: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de188: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1de188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1de18c: 0xc440d848  lwc1        $f0, -0x27B8($v0)
    ctx->pc = 0x1de18cu;
    { uint32_t bits = FAST_READ32(0x45D848u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de190: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1de190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1de194: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1de194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1de198: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1de198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1de19c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1de19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1de1a0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1de1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1de1a4: 0xc077a50  jal         func_1DE940
    ctx->pc = 0x1DE1A4u;
    SET_GPR_U32(ctx, 31, 0x1DE1ACu);
    ctx->pc = 0x1DE1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1A4u;
    // 0x1de1a8: 0xae030044  sw          $v1, 0x44($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE940u, 0x1DE1A4u, 0x1DE1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1ACu;
label_1de1ac:
    // 0x1de1ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1b8: 0xc077d8e  jal         func_1DF638
    ctx->pc = 0x1DE1B8u;
    SET_GPR_U32(ctx, 31, 0x1DE1C0u);
    ctx->pc = 0x1DE1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1B8u;
    // 0x1de1bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF638u, 0x1DE1B8u, 0x1DE1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1C0u;
label_1de1c0:
    // 0x1de1c0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1de1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1de1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de1c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de1c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de1cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1de1ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1de1d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de1d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de1d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1de1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1D8u;
        // 0x1de1dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE1E0u;
}
