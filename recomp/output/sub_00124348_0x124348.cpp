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

// Function: sub_00124348
// Address: 0x124348 - 0x124430
void sub_00124348_0x124348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124348_0x124348");
#endif

    switch (ctx->pc) {
        case 0x12437cu: goto label_12437c;
        case 0x12438cu: goto label_12438c;
        case 0x12439cu: goto label_12439c;
        case 0x12440cu: goto label_12440c;
        default: break;
    }

    ctx->pc = 0x124348u;

    // 0x124348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12434c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12434cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x124350: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x124350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x124354: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x124354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12435c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12435cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124360: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124364: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x124364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124368: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12436c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12436cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124370: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x124370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x124374: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124374u;
    SET_GPR_U32(ctx, 31, 0x12437Cu);
    ctx->pc = 0x124378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124374u;
    // 0x124378: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124374u, 0x12437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12437Cu;
label_12437c:
    // 0x12437c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x12437Cu;
    {
        const bool branch_taken_0x12437c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12437Cu;
        // 0x124380: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12437c) {
            ctx->pc = 0x1243F4u;
            goto label_1243f4;
        }
    }
    ctx->pc = 0x124384u;
    // 0x124384: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124384u;
    SET_GPR_U32(ctx, 31, 0x12438Cu);
    ctx->pc = 0x124388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124384u;
    // 0x124388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124384u, 0x12438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12438Cu;
label_12438c:
    // 0x12438c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12438Cu;
    {
        const bool branch_taken_0x12438c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12438c) {
            ctx->pc = 0x1243A8u;
            goto label_1243a8;
        }
    }
    ctx->pc = 0x124394u;
    // 0x124394: 0xc040a7a  jal         func_1029E8
    ctx->pc = 0x124394u;
    SET_GPR_U32(ctx, 31, 0x12439Cu);
    ctx->pc = 0x124398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124394u;
    // 0x124398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E8u, 0x124394u, 0x12439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12439Cu;
label_12439c:
    // 0x12439c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12439cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1243a0: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1243A0u;
    {
        const bool branch_taken_0x1243a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243A0u;
        // 0x1243a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243a0) {
            ctx->pc = 0x12440Cu;
            goto label_12440c;
        }
    }
    ctx->pc = 0x1243A8u;
label_1243a8:
    // 0x1243a8: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1243A8u;
    {
        const bool branch_taken_0x1243a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1243a8) {
            ctx->pc = 0x1243ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1243A8u;
            // 0x1243ac: 0x8e840078  lw          $a0, 0x78($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1243FCu;
            goto label_1243fc;
        }
    }
    ctx->pc = 0x1243B0u;
    // 0x1243b0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1243b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1243b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1243b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1243b8: 0x0  nop
    ctx->pc = 0x1243b8u;
    // NOP
    // 0x1243bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1243bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1243c0: 0x0  nop
    ctx->pc = 0x1243c0u;
    // NOP
    // 0x1243c4: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x1243C4u;
    {
        const bool branch_taken_0x1243c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1243c4) {
            ctx->pc = 0x1243C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1243C4u;
            // 0x1243c8: 0x8e840078  lw          $a0, 0x78($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1243FCu;
            goto label_1243fc;
        }
    }
    ctx->pc = 0x1243CCu;
    // 0x1243cc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1243ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1243d0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1243d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1243d4: 0x0  nop
    ctx->pc = 0x1243d4u;
    // NOP
    // 0x1243d8: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1243D8u;
    {
        const bool branch_taken_0x1243d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1243d8) {
            ctx->pc = 0x1243DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1243D8u;
            // 0x1243dc: 0x8e840078  lw          $a0, 0x78($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1243FCu;
            goto label_1243fc;
        }
    }
    ctx->pc = 0x1243E0u;
    // 0x1243e0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1243e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1243e4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1243e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1243e8: 0x0  nop
    ctx->pc = 0x1243e8u;
    // NOP
    // 0x1243ec: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1243ECu;
    {
        const bool branch_taken_0x1243ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1243ec) {
            ctx->pc = 0x1243F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1243ECu;
            // 0x1243f0: 0x8e840078  lw          $a0, 0x78($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1243FCu;
            goto label_1243fc;
        }
    }
    ctx->pc = 0x1243F4u;
label_1243f4:
    // 0x1243f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1243F4u;
    {
        const bool branch_taken_0x1243f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243F4u;
        // 0x1243f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243f4) {
            ctx->pc = 0x12440Cu;
            goto label_12440c;
        }
    }
    ctx->pc = 0x1243FCu;
label_1243fc:
    // 0x1243fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1243fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124400: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x124400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124404: 0xc042c8c  jal         func_10B230
    ctx->pc = 0x124404u;
    SET_GPR_U32(ctx, 31, 0x12440Cu);
    ctx->pc = 0x124408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124404u;
    // 0x124408: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B230u, 0x124404u, 0x12440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12440Cu;
label_12440c:
    // 0x12440c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12440cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124414: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124418: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12441c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12441cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124420: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x124420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124424: 0x3e00008  jr          $ra
    ctx->pc = 0x124424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124424u;
        // 0x124428: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12442Cu;
    // 0x12442c: 0x0  nop
    ctx->pc = 0x12442cu;
    // NOP
    ctx->pc = 0x124430u;
}
