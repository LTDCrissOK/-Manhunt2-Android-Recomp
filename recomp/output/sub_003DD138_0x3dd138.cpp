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

// Function: sub_003DD138
// Address: 0x3dd138 - 0x3dd1c0
void sub_003DD138_0x3dd138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD138_0x3dd138");
#endif

    switch (ctx->pc) {
        case 0x3dd158u: goto label_3dd158;
        case 0x3dd18cu: goto label_3dd18c;
        default: break;
    }

    ctx->pc = 0x3dd138u;

    // 0x3dd138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dd138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dd13c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dd13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dd140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dd140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dd144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dd148: 0x26110260  addiu       $s1, $s0, 0x260
    ctx->pc = 0x3dd148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x3dd14c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dd14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dd150: 0xc06fc34  jal         func_1BF0D0
    ctx->pc = 0x3DD150u;
    SET_GPR_U32(ctx, 31, 0x3DD158u);
    ctx->pc = 0x3DD154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD150u;
    // 0x3dd154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x3DD150u, 0x3DD158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD158u;
label_3dd158:
    // 0x3dd158: 0xc60c0350  lwc1        $f12, 0x350($s0)
    ctx->pc = 0x3dd158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3dd15c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3dd15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x3dd160: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3dd160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3dd164: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dd164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dd168: 0xc601033c  lwc1        $f1, 0x33C($s0)
    ctx->pc = 0x3dd168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd16c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3dd16cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3dd170: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x3dd170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3dd174: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3dd174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dd178: 0x0  nop
    ctx->pc = 0x3dd178u;
    // NOP
    // 0x3dd17c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3DD17Cu;
    {
        const bool branch_taken_0x3dd17c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DD180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD17Cu;
        // 0x3dd180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd17c) {
            ctx->pc = 0x3DD190u;
            goto label_3dd190;
        }
    }
    ctx->pc = 0x3DD184u;
    // 0x3dd184: 0xc06fcb6  jal         func_1BF2D8
    ctx->pc = 0x3DD184u;
    SET_GPR_U32(ctx, 31, 0x3DD18Cu);
    ctx->pc = 0x3DD188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD184u;
    // 0x3dd188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF2D8u, 0x3DD184u, 0x3DD18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD18Cu;
label_3dd18c:
    // 0x3dd18c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3dd18cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3dd190:
    // 0x3dd190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dd190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dd194: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dd194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dd198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dd198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd19c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD19Cu;
        // 0x3dd1a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD1A4u;
    // 0x3dd1a4: 0x0  nop
    ctx->pc = 0x3dd1a4u;
    // NOP
    // 0x3dd1a8: 0xac820360  sw          $v0, 0x360($a0)
    ctx->pc = 0x3dd1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 864), GPR_U32(ctx, 2));
    // 0x3dd1ac: 0x0  nop
    ctx->pc = 0x3dd1acu;
    // NOP
    // 0x3dd1b0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x3dd1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x3dd1b4: 0x0  nop
    ctx->pc = 0x3dd1b4u;
    // NOP
    // 0x3dd1b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dd1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dd1bc: 0x0  nop
    ctx->pc = 0x3dd1bcu;
    // NOP
    ctx->pc = 0x3dd1c0u;
}
