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

// Function: sub_00253530
// Address: 0x253530 - 0x253610
void sub_00253530_0x253530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253530_0x253530");
#endif

    switch (ctx->pc) {
        case 0x25354cu: goto label_25354c;
        case 0x253584u: goto label_253584;
        case 0x2535e0u: goto label_2535e0;
        case 0x2535f4u: goto label_2535f4;
        default: break;
    }

    ctx->pc = 0x253530u;

    // 0x253530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253534: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x253534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x253538: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x253538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25353c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25353cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253540: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x253540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x253544: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x253544u;
    SET_GPR_U32(ctx, 31, 0x25354Cu);
    ctx->pc = 0x253548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253544u;
    // 0x253548: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x253544u, 0x25354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25354Cu;
label_25354c:
    // 0x25354c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x25354Cu;
    {
        const bool branch_taken_0x25354c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25354Cu;
        // 0x253550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25354c) {
            ctx->pc = 0x2535F8u;
            goto label_2535f8;
        }
    }
    ctx->pc = 0x253554u;
    // 0x253554: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x253554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x253558: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x253558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x25355c: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x25355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x253560: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x253560u;
    {
        const bool branch_taken_0x253560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253560u;
        // 0x253564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253560) {
            ctx->pc = 0x2535F8u;
            goto label_2535f8;
        }
    }
    ctx->pc = 0x253568u;
    // 0x253568: 0x8e021004  lw          $v0, 0x1004($s0)
    ctx->pc = 0x253568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    // 0x25356c: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x25356Cu;
    {
        const bool branch_taken_0x25356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25356c) {
            ctx->pc = 0x253570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25356Cu;
            // 0x253570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2535F8u;
            goto label_2535f8;
        }
    }
    ctx->pc = 0x253574u;
    // 0x253574: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x253574u;
    {
        const bool branch_taken_0x253574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x253574) {
            ctx->pc = 0x253578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253574u;
            // 0x253578: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25359Cu;
            goto label_25359c;
        }
    }
    ctx->pc = 0x25357Cu;
    // 0x25357c: 0xc094c18  jal         func_253060
    ctx->pc = 0x25357Cu;
    SET_GPR_U32(ctx, 31, 0x253584u);
    ctx->pc = 0x253580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25357Cu;
    // 0x253580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253060u, 0x25357Cu, 0x253584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253584u;
label_253584:
    // 0x253584: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x253584u;
    {
        const bool branch_taken_0x253584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253584) {
            ctx->pc = 0x253588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253584u;
            // 0x253588: 0x8e021004  lw          $v0, 0x1004($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253598u;
            goto label_253598;
        }
    }
    ctx->pc = 0x25358Cu;
    // 0x25358c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253590: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x253590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x253594: 0x8e021004  lw          $v0, 0x1004($s0)
    ctx->pc = 0x253594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
label_253598:
    // 0x253598: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x253598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
label_25359c:
    // 0x25359c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x25359cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2535a0: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2535a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x2535a4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2535a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2535a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2535a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2535ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2535acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2535b0: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x2535b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2535b4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2535b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2535b8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2535b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2535bc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2535bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2535c0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2535c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2535c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2535c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2535c8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2535c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2535cc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2535ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2535d0: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2535d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2535d4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2535d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2535d8: 0xc061fbe  jal         func_187EF8
    ctx->pc = 0x2535D8u;
    SET_GPR_U32(ctx, 31, 0x2535E0u);
    ctx->pc = 0x2535DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2535D8u;
    // 0x2535dc: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EF8u, 0x2535D8u, 0x2535E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2535E0u;
label_2535e0:
    // 0x2535e0: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2535e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2535e4: 0x260703c0  addiu       $a3, $s0, 0x3C0
    ctx->pc = 0x2535e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x2535e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2535e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2535ec: 0xc062da6  jal         func_18B698
    ctx->pc = 0x2535ECu;
    SET_GPR_U32(ctx, 31, 0x2535F4u);
    ctx->pc = 0x2535F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2535ECu;
    // 0x2535f0: 0x260603d0  addiu       $a2, $s0, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B698u, 0x2535ECu, 0x2535F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2535F4u;
label_2535f4:
    // 0x2535f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2535f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2535f8:
    // 0x2535f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2535f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2535fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2535fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253600: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x253600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253604: 0x3e00008  jr          $ra
    ctx->pc = 0x253604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253604u;
        // 0x253608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25360Cu;
    // 0x25360c: 0x0  nop
    ctx->pc = 0x25360cu;
    // NOP
    ctx->pc = 0x253610u;
}
