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

// Function: sub_00264820
// Address: 0x264820 - 0x264b98
void sub_00264820_0x264820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264820_0x264820");
#endif

    switch (ctx->pc) {
        case 0x264848u: goto label_264848;
        case 0x264864u: goto label_264864;
        case 0x264870u: goto label_264870;
        case 0x264880u: goto label_264880;
        case 0x26488cu: goto label_26488c;
        case 0x264898u: goto label_264898;
        case 0x264920u: goto label_264920;
        case 0x2649f4u: goto label_2649f4;
        case 0x264a1cu: goto label_264a1c;
        case 0x264a4cu: goto label_264a4c;
        case 0x264a5cu: goto label_264a5c;
        case 0x264a68u: goto label_264a68;
        case 0x264a90u: goto label_264a90;
        case 0x264aa0u: goto label_264aa0;
        case 0x264ab0u: goto label_264ab0;
        case 0x264b14u: goto label_264b14;
        case 0x264b3cu: goto label_264b3c;
        case 0x264b78u: goto label_264b78;
        default: break;
    }

    ctx->pc = 0x264820u;

    // 0x264820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x264820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x264824: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x264824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x264828: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x264828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26482c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26482cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264830: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x264830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x264834: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x264834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x264838: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x264838u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26483c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x264840: 0xc098386  jal         func_260E18
    ctx->pc = 0x264840u;
    SET_GPR_U32(ctx, 31, 0x264848u);
    ctx->pc = 0x264844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264840u;
    // 0x264844: 0x8e320234  lw          $s2, 0x234($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260E18u, 0x264840u, 0x264848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264848u;
label_264848:
    // 0x264848: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x264848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x26484c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26484Cu;
    {
        const bool branch_taken_0x26484c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26484Cu;
        // 0x264850: 0x240503fd  addiu       $a1, $zero, 0x3FD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26484c) {
            ctx->pc = 0x264898u;
            goto label_264898;
        }
    }
    ctx->pc = 0x264854u;
    // 0x264854: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x264854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264858: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x264858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26485c: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x26485Cu;
    SET_GPR_U32(ctx, 31, 0x264864u);
    ctx->pc = 0x264860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26485Cu;
    // 0x264860: 0x24530040  addiu       $s3, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x26485Cu, 0x264864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264864u;
label_264864:
    // 0x264864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x264864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264868: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x264868u;
    SET_GPR_U32(ctx, 31, 0x264870u);
    ctx->pc = 0x26486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264868u;
    // 0x26486c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x264868u, 0x264870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264870u;
label_264870:
    // 0x264870: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x264870u;
    {
        const bool branch_taken_0x264870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264870) {
            ctx->pc = 0x264874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264870u;
            // 0x264874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264884u;
            goto label_264884;
        }
    }
    ctx->pc = 0x264878u;
    // 0x264878: 0xc0c4900  jal         func_312400
    ctx->pc = 0x264878u;
    SET_GPR_U32(ctx, 31, 0x264880u);
    ctx->pc = 0x26487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264878u;
    // 0x26487c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x264878u, 0x264880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264880u;
label_264880:
    // 0x264880: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x264880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_264884:
    // 0x264884: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x264884u;
    SET_GPR_U32(ctx, 31, 0x26488Cu);
    ctx->pc = 0x264888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264884u;
    // 0x264888: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x264884u, 0x26488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26488Cu;
label_26488c:
    // 0x26488c: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x26488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x264890: 0xc0c48da  jal         func_312368
    ctx->pc = 0x264890u;
    SET_GPR_U32(ctx, 31, 0x264898u);
    ctx->pc = 0x264894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264890u;
    // 0x264894: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x264890u, 0x264898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264898u;
label_264898:
    // 0x264898: 0xc6210294  lwc1        $f1, 0x294($s1)
    ctx->pc = 0x264898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26489c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26489cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2648a0: 0x0  nop
    ctx->pc = 0x2648a0u;
    // NOP
    // 0x2648a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2648a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2648a8: 0x0  nop
    ctx->pc = 0x2648a8u;
    // NOP
    // 0x2648ac: 0x45020041  bc1fl       . + 4 + (0x41 << 2)
    ctx->pc = 0x2648ACu;
    {
        const bool branch_taken_0x2648ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2648ac) {
            ctx->pc = 0x2648B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2648ACu;
            // 0x2648b0: 0x8e230298  lw          $v1, 0x298($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2649B4u;
            goto label_2649b4;
        }
    }
    ctx->pc = 0x2648B4u;
    // 0x2648b4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2648b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2648b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2648b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2648bc: 0x8e250298  lw          $a1, 0x298($s1)
    ctx->pc = 0x2648bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x2648c0: 0x10a00036  beqz        $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2648C0u;
    {
        const bool branch_taken_0x2648c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2648C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648C0u;
        // 0x2648c4: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2648c0) {
            ctx->pc = 0x26499Cu;
            goto label_26499c;
        }
    }
    ctx->pc = 0x2648C8u;
    // 0x2648c8: 0x8e220234  lw          $v0, 0x234($s1)
    ctx->pc = 0x2648c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x2648cc: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x2648CCu;
    {
        const bool branch_taken_0x2648cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648cc) {
            ctx->pc = 0x2648D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2648CCu;
            // 0x2648d0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2649A0u;
            goto label_2649a0;
        }
    }
    ctx->pc = 0x2648D4u;
    // 0x2648d4: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x2648d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2648d8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2648d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2648dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2648DCu;
    {
        const bool branch_taken_0x2648dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2648E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648DCu;
        // 0x2648e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2648dc) {
            ctx->pc = 0x2648F0u;
            goto label_2648f0;
        }
    }
    ctx->pc = 0x2648E4u;
    // 0x2648e4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2648e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2648e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2648E8u;
    {
        const bool branch_taken_0x2648e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648e8) {
            ctx->pc = 0x2648F4u;
            goto label_2648f4;
        }
    }
    ctx->pc = 0x2648F0u;
label_2648f0:
    // 0x2648f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2648f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2648f4:
    // 0x2648f4: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2648F4u;
    {
        const bool branch_taken_0x2648f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2648F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648F4u;
        // 0x2648f8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2648f4) {
            ctx->pc = 0x2649A0u;
            goto label_2649a0;
        }
    }
    ctx->pc = 0x2648FCu;
    // 0x2648fc: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x2648fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x264900: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x264900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x264904: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x264904u;
    {
        const bool branch_taken_0x264904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264904) {
            ctx->pc = 0x264930u;
            goto label_264930;
        }
    }
    ctx->pc = 0x26490Cu;
    // 0x26490c: 0x8e4401a0  lw          $a0, 0x1A0($s2)
    ctx->pc = 0x26490cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
    // 0x264910: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264910u;
    {
        const bool branch_taken_0x264910 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x264910) {
            ctx->pc = 0x264914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264910u;
            // 0x264914: 0x8e230298  lw          $v1, 0x298($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264924u;
            goto label_264924;
        }
    }
    ctx->pc = 0x264918u;
    // 0x264918: 0xc0c67da  jal         func_319F68
    ctx->pc = 0x264918u;
    SET_GPR_U32(ctx, 31, 0x264920u);
    ctx->pc = 0x319F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F68u, 0x264918u, 0x264920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264920u;
label_264920:
    // 0x264920: 0x8e230298  lw          $v1, 0x298($s1)
    ctx->pc = 0x264920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
label_264924:
    // 0x264924: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x264924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x264928: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x264928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x26492c: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x26492cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_264930:
    // 0x264930: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x264930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x264934: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x264934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x264938: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x264938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26493c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x26493cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x264940: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x264940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x264944: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x264944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x264948: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x264948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26494c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264950: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x264950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x264954: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x264954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x264958: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x264958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26495c: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x26495cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x264960: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x264960u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x264964: 0x8e230298  lw          $v1, 0x298($s1)
    ctx->pc = 0x264964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x264968: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x264968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26496c: 0xac82bce4  sw          $v0, -0x431C($a0)
    ctx->pc = 0x26496cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FBCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBCE4u, _value); } while (0);
    // 0x264970: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x264970u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x264974: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x264974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x264978: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x264978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26497c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x26497cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x264980: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x264980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x264984: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x264984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x264988: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x264988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x26498c: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x26498cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264990: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x264990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264994: 0xb064001f  sdl         $a0, 0x1F($v1)
    ctx->pc = 0x264994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264998: 0xb4640018  sdr         $a0, 0x18($v1)
    ctx->pc = 0x264998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_26499c:
    // 0x26499c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x26499cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2649a0:
    // 0x2649a0: 0xc6200294  lwc1        $f0, 0x294($s1)
    ctx->pc = 0x2649a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2649a4: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2649a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2649a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2649a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2649ac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2649ACu;
    {
        const bool branch_taken_0x2649ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2649B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649ACu;
        // 0x2649b0: 0xe6200294  swc1        $f0, 0x294($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 660), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2649ac) {
            ctx->pc = 0x2649F4u;
            goto label_2649f4;
        }
    }
    ctx->pc = 0x2649B4u;
label_2649b4:
    // 0x2649b4: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2649B4u;
    {
        const bool branch_taken_0x2649b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2649b4) {
            ctx->pc = 0x2649B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2649B4u;
            // 0x2649b8: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2649F8u;
            goto label_2649f8;
        }
    }
    ctx->pc = 0x2649BCu;
    // 0x2649bc: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x2649bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2649c0: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x2649c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2649c4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2649C4u;
    {
        const bool branch_taken_0x2649c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2649c4) {
            ctx->pc = 0x2649C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2649C4u;
            // 0x2649c8: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2649F8u;
            goto label_2649f8;
        }
    }
    ctx->pc = 0x2649CCu;
    // 0x2649cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2649ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2649d0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x2649d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x2649d4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2649d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2649d8: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x2649d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x2649dc: 0x8e250298  lw          $a1, 0x298($s1)
    ctx->pc = 0x2649dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x2649e0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2649e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2649e4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2649E4u;
    {
        const bool branch_taken_0x2649e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2649e4) {
            ctx->pc = 0x2649E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2649E4u;
            // 0x2649e8: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2649F8u;
            goto label_2649f8;
        }
    }
    ctx->pc = 0x2649ECu;
    // 0x2649ec: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x2649ECu;
    SET_GPR_U32(ctx, 31, 0x2649F4u);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x2649ECu, 0x2649F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2649F4u;
label_2649f4:
    // 0x2649f4: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2649f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_2649f8:
    // 0x2649f8: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x2649f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
    // 0x2649fc: 0x5060002d  beql        $v1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x2649FCu;
    {
        const bool branch_taken_0x2649fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2649fc) {
            ctx->pc = 0x264A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2649FCu;
            // 0x264a00: 0x8e240230  lw          $a0, 0x230($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264AB4u;
            goto label_264ab4;
        }
    }
    ctx->pc = 0x264A04u;
    // 0x264a04: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x264a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x264a08: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x264a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x264a0c: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x264A0Cu;
    {
        const bool branch_taken_0x264a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264a0c) {
            ctx->pc = 0x264A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264A0Cu;
            // 0x264a10: 0x8e240230  lw          $a0, 0x230($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264AB4u;
            goto label_264ab4;
        }
    }
    ctx->pc = 0x264A14u;
    // 0x264a14: 0xc08db00  jal         func_236C00
    ctx->pc = 0x264A14u;
    SET_GPR_U32(ctx, 31, 0x264A1Cu);
    ctx->pc = 0x264A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A14u;
    // 0x264a18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C00u, 0x264A14u, 0x264A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A1Cu;
label_264a1c:
    // 0x264a1c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x264A1Cu;
    {
        const bool branch_taken_0x264a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A1Cu;
        // 0x264a20: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a1c) {
            ctx->pc = 0x264AB0u;
            goto label_264ab0;
        }
    }
    ctx->pc = 0x264A24u;
    // 0x264a24: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x264a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x264a28: 0x8e430338  lw          $v1, 0x338($s2)
    ctx->pc = 0x264a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x264a2c: 0x8c450150  lw          $a1, 0x150($v0)
    ctx->pc = 0x264a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x264a30: 0x10a4001f  beq         $a1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x264A30u;
    {
        const bool branch_taken_0x264a30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x264A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A30u;
        // 0x264a34: 0x8c700088  lw          $s0, 0x88($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a30) {
            ctx->pc = 0x264AB0u;
            goto label_264ab0;
        }
    }
    ctx->pc = 0x264A38u;
    // 0x264a38: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x264a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x264a3c: 0x50a2001d  beql        $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x264A3Cu;
    {
        const bool branch_taken_0x264a3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x264a3c) {
            ctx->pc = 0x264A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264A3Cu;
            // 0x264a40: 0x8e240230  lw          $a0, 0x230($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264AB4u;
            goto label_264ab4;
        }
    }
    ctx->pc = 0x264A44u;
    // 0x264a44: 0xc08f68a  jal         func_23DA28
    ctx->pc = 0x264A44u;
    SET_GPR_U32(ctx, 31, 0x264A4Cu);
    ctx->pc = 0x264A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A44u;
    // 0x264a48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA28u, 0x264A44u, 0x264A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A4Cu;
label_264a4c:
    // 0x264a4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x264A4Cu;
    {
        const bool branch_taken_0x264a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A4Cu;
        // 0x264a50: 0x2602fff0  addiu       $v0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a4c) {
            ctx->pc = 0x264A70u;
            goto label_264a70;
        }
    }
    ctx->pc = 0x264A54u;
    // 0x264a54: 0xc09855c  jal         func_261570
    ctx->pc = 0x264A54u;
    SET_GPR_U32(ctx, 31, 0x264A5Cu);
    ctx->pc = 0x264A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A54u;
    // 0x264a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261570u, 0x264A54u, 0x264A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A5Cu;
label_264a5c:
    // 0x264a5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x264a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a60: 0xc08fe42  jal         func_23F908
    ctx->pc = 0x264A60u;
    SET_GPR_U32(ctx, 31, 0x264A68u);
    ctx->pc = 0x264A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A60u;
    // 0x264a64: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F908u, 0x264A60u, 0x264A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A68u;
label_264a68:
    // 0x264a68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x264A68u;
    {
        const bool branch_taken_0x264a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264a68) {
            ctx->pc = 0x264A98u;
            goto label_264a98;
        }
    }
    ctx->pc = 0x264A70u;
label_264a70:
    // 0x264a70: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x264a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x264a74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x264A74u;
    {
        const bool branch_taken_0x264a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264a74) {
            ctx->pc = 0x264A98u;
            goto label_264a98;
        }
    }
    ctx->pc = 0x264A7Cu;
    // 0x264a7c: 0x8e4205f4  lw          $v0, 0x5F4($s2)
    ctx->pc = 0x264a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
    // 0x264a80: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x264A80u;
    {
        const bool branch_taken_0x264a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264a80) {
            ctx->pc = 0x264A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264A80u;
            // 0x264a84: 0x8e240230  lw          $a0, 0x230($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264AB4u;
            goto label_264ab4;
        }
    }
    ctx->pc = 0x264A88u;
    // 0x264a88: 0xc09855c  jal         func_261570
    ctx->pc = 0x264A88u;
    SET_GPR_U32(ctx, 31, 0x264A90u);
    ctx->pc = 0x264A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A88u;
    // 0x264a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261570u, 0x264A88u, 0x264A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A90u;
label_264a90:
    // 0x264a90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x264A90u;
    {
        const bool branch_taken_0x264a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264a90) {
            ctx->pc = 0x264AA8u;
            goto label_264aa8;
        }
    }
    ctx->pc = 0x264A98u;
label_264a98:
    // 0x264a98: 0xc098554  jal         func_261550
    ctx->pc = 0x264A98u;
    SET_GPR_U32(ctx, 31, 0x264AA0u);
    ctx->pc = 0x264A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A98u;
    // 0x264a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261550u, 0x264A98u, 0x264AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264AA0u;
label_264aa0:
    // 0x264aa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x264AA0u;
    {
        const bool branch_taken_0x264aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AA0u;
        // 0x264aa4: 0x8e240230  lw          $a0, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264aa0) {
            ctx->pc = 0x264AB4u;
            goto label_264ab4;
        }
    }
    ctx->pc = 0x264AA8u;
label_264aa8:
    // 0x264aa8: 0xc09854c  jal         func_261530
    ctx->pc = 0x264AA8u;
    SET_GPR_U32(ctx, 31, 0x264AB0u);
    ctx->pc = 0x264AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264AA8u;
    // 0x264aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261530u, 0x264AA8u, 0x264AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264AB0u;
label_264ab0:
    // 0x264ab0: 0x8e240230  lw          $a0, 0x230($s1)
    ctx->pc = 0x264ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_264ab4:
    // 0x264ab4: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x264ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x264ab8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x264AB8u;
    {
        const bool branch_taken_0x264ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AB8u;
        // 0x264abc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ab8) {
            ctx->pc = 0x264B7Cu;
            goto label_264b7c;
        }
    }
    ctx->pc = 0x264AC0u;
    // 0x264ac0: 0x8e430338  lw          $v1, 0x338($s2)
    ctx->pc = 0x264ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x264ac4: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x264ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x264ac8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x264ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x264acc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x264accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x264ad0: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x264AD0u;
    {
        const bool branch_taken_0x264ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264ad0) {
            ctx->pc = 0x264AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264AD0u;
            // 0x264ad4: 0x8c630084  lw          $v1, 0x84($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264B44u;
            goto label_264b44;
        }
    }
    ctx->pc = 0x264AD8u;
    // 0x264ad8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x264ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x264adc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x264adcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x264ae0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x264ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264ae4: 0x0  nop
    ctx->pc = 0x264ae4u;
    // NOP
    // 0x264ae8: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x264ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x264aec: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x264aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x264af0: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x264af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x264af4: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x264AF4u;
    {
        const bool branch_taken_0x264af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x264af4) {
            ctx->pc = 0x264AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264AF4u;
            // 0x264af8: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264B80u;
            goto label_264b80;
        }
    }
    ctx->pc = 0x264AFCu;
    // 0x264afc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x264afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x264b00: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x264b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x264b04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x264b04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x264b08: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x264b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x264b0c: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x264B0Cu;
    SET_GPR_U32(ctx, 31, 0x264B14u);
    ctx->pc = 0x264B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264B0Cu;
    // 0x264b10: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x264B0Cu, 0x264B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B14u;
label_264b14:
    // 0x264b14: 0x8e230230  lw          $v1, 0x230($s1)
    ctx->pc = 0x264b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x264b18: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x264b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x264b1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x264b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x264b20: 0xae230230  sw          $v1, 0x230($s1)
    ctx->pc = 0x264b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 3));
    // 0x264b24: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x264b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x264b28: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x264b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x264b2c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x264B2Cu;
    {
        const bool branch_taken_0x264b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B2Cu;
        // 0x264b30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b2c) {
            ctx->pc = 0x264B7Cu;
            goto label_264b7c;
        }
    }
    ctx->pc = 0x264B34u;
    // 0x264b34: 0xc0bf020  jal         func_2FC080
    ctx->pc = 0x264B34u;
    SET_GPR_U32(ctx, 31, 0x264B3Cu);
    ctx->pc = 0x264B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264B34u;
    // 0x264b38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC080u, 0x264B34u, 0x264B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B3Cu;
label_264b3c:
    // 0x264b3c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x264B3Cu;
    {
        const bool branch_taken_0x264b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B3Cu;
        // 0x264b40: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b3c) {
            ctx->pc = 0x264B7Cu;
            goto label_264b7c;
        }
    }
    ctx->pc = 0x264B44u;
label_264b44:
    // 0x264b44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264b48: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x264B48u;
    {
        const bool branch_taken_0x264b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x264B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B48u;
        // 0x264b4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b48) {
            ctx->pc = 0x264B78u;
            goto label_264b78;
        }
    }
    ctx->pc = 0x264B50u;
    // 0x264b50: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x264B50u;
    {
        const bool branch_taken_0x264b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x264B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B50u;
        // 0x264b54: 0x2402ffdf  addiu       $v0, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b50) {
            ctx->pc = 0x264B78u;
            goto label_264b78;
        }
    }
    ctx->pc = 0x264B58u;
    // 0x264b58: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x264b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x264b5c: 0xae220230  sw          $v0, 0x230($s1)
    ctx->pc = 0x264b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 2));
    // 0x264b60: 0x8e4300bc  lw          $v1, 0xBC($s2)
    ctx->pc = 0x264b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x264b64: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x264b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x264b68: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264B68u;
    {
        const bool branch_taken_0x264b68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x264B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B68u;
        // 0x264b6c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b68) {
            ctx->pc = 0x264B7Cu;
            goto label_264b7c;
        }
    }
    ctx->pc = 0x264B70u;
    // 0x264b70: 0xc0bf020  jal         func_2FC080
    ctx->pc = 0x264B70u;
    SET_GPR_U32(ctx, 31, 0x264B78u);
    ctx->pc = 0x264B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264B70u;
    // 0x264b74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC080u, 0x264B70u, 0x264B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B78u;
label_264b78:
    // 0x264b78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x264b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_264b7c:
    // 0x264b7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x264b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_264b80:
    // 0x264b80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x264b80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264b84: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x264b84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x264b88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x264b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264b8c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x264b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x264b90: 0x3e00008  jr          $ra
    ctx->pc = 0x264B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B90u;
        // 0x264b94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264B98u;
}
