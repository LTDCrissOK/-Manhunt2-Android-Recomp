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

// Function: sub_002A7860
// Address: 0x2a7860 - 0x2a7930
void sub_002A7860_0x2a7860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7860_0x2a7860");
#endif

    switch (ctx->pc) {
        case 0x2a789cu: goto label_2a789c;
        case 0x2a78a0u: goto label_2a78a0;
        case 0x2a78c0u: goto label_2a78c0;
        default: break;
    }

    ctx->pc = 0x2a7860u;

    // 0x2a7860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a7860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a7864: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a7864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a7868: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a7868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a786c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a786cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7870: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a7870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a7874: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a7874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a7878: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a7878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a787c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2a787cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2a7880: 0x26540014  addiu       $s4, $s2, 0x14
    ctx->pc = 0x2a7880u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2a7884: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2a7884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2a7888: 0x2415001c  addiu       $s5, $zero, 0x1C
    ctx->pc = 0x2a7888u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a788c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a7890: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2a7890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2a7894: 0xc0a9f48  jal         func_2A7D20
    ctx->pc = 0x2A7894u;
    SET_GPR_U32(ctx, 31, 0x2A789Cu);
    ctx->pc = 0x2A7898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7894u;
    // 0x2a7898: 0x3c16004c  lui         $s6, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D20u, 0x2A7894u, 0x2A789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A789Cu;
label_2a789c:
    // 0x2a789c: 0x24510020  addiu       $s1, $v0, 0x20
    ctx->pc = 0x2a789cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2a78a0:
    // 0x2a78a0: 0x13803c  dsll32      $s0, $s3, 0
    ctx->pc = 0x2a78a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (32 + 0));
    // 0x2a78a4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2a78a4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2a78a8: 0x26c4f250  addiu       $a0, $s6, -0xDB0
    ctx->pc = 0x2a78a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963792));
    // 0x2a78ac: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2a78acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2a78b0: 0x66730001  daddiu      $s3, $s3, 0x1
    ctx->pc = 0x2a78b0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)1);
    // 0x2a78b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2a78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a78b8: 0xc0a8e12  jal         func_2A3848
    ctx->pc = 0x2A78B8u;
    SET_GPR_U32(ctx, 31, 0x2A78C0u);
    ctx->pc = 0x2A78BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A78B8u;
    // 0x2a78bc: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3848u, 0x2A78B8u, 0x2A78C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A78C0u;
label_2a78c0:
    // 0x2a78c0: 0x2151818  mult        $v1, $s0, $s5
    ctx->pc = 0x2a78c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a78c4: 0x748021  addu        $s0, $v1, $s4
    ctx->pc = 0x2a78c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2a78c8: 0x2a630005  slti        $v1, $s3, 0x5
    ctx->pc = 0x2a78c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2a78cc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A78CCu;
    {
        const bool branch_taken_0x2a78cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A78CCu;
        // 0x2a78d0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a78cc) {
            ctx->pc = 0x2A78A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a78a0;
        }
    }
    ctx->pc = 0x2A78D4u;
    // 0x2a78d4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2a78d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a78d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a78d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a78dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a78dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a78e0: 0xe64100a0  swc1        $f1, 0xA0($s2)
    ctx->pc = 0x2a78e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
    // 0x2a78e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a78e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a78e8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2a78e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a78ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a78ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a78f0: 0xe64000a4  swc1        $f0, 0xA4($s2)
    ctx->pc = 0x2a78f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
    // 0x2a78f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2a78f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a78f8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2a78f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a78fc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2a78fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7900: 0xe64100a8  swc1        $f1, 0xA8($s2)
    ctx->pc = 0x2a7900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
    // 0x2a7904: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2a7904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a7908: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2a7908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a790c: 0xe64000ac  swc1        $f0, 0xAC($s2)
    ctx->pc = 0x2a790cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
    // 0x2a7910: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x2a7910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7914: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2a7914u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a7918: 0xe64100b0  swc1        $f1, 0xB0($s2)
    ctx->pc = 0x2a7918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 176), bits); }
    // 0x2a791c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a791cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a7920: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a7920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7924: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7924u;
        // 0x2a7928: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A792Cu;
    // 0x2a792c: 0x0  nop
    ctx->pc = 0x2a792cu;
    // NOP
    ctx->pc = 0x2a7930u;
}
