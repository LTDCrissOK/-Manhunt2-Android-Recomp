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

// Function: sub_002E9590
// Address: 0x2e9590 - 0x2e96d8
void sub_002E9590_0x2e9590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9590_0x2e9590");
#endif

    switch (ctx->pc) {
        case 0x2e9638u: goto label_2e9638;
        case 0x2e9648u: goto label_2e9648;
        case 0x2e9658u: goto label_2e9658;
        case 0x2e9680u: goto label_2e9680;
        default: break;
    }

    ctx->pc = 0x2e9590u;

    // 0x2e9590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e9590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e9594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9598: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e9598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e959c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e959cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e95a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e95a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e95a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e95a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e95a8: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2e95a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e95ac: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2e95acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e95b0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2e95b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e95b4: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x2e95b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e95b8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x2e95b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x2e95bc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E95BCu;
    {
        const bool branch_taken_0x2e95bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95BCu;
        // 0x2e95c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95bc) {
            ctx->pc = 0x2E95D8u;
            goto label_2e95d8;
        }
    }
    ctx->pc = 0x2E95C4u;
    // 0x2e95c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e95c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e95c8: 0x0  nop
    ctx->pc = 0x2e95c8u;
    // NOP
    // 0x2e95cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e95ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e95d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E95D0u;
    {
        const bool branch_taken_0x2e95d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95D0u;
        // 0x2e95d4: 0xc60100d0  lwc1        $f1, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95d0) {
            ctx->pc = 0x2E95F4u;
            goto label_2e95f4;
        }
    }
    ctx->pc = 0x2E95D8u;
label_2e95d8:
    // 0x2e95d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e95d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e95dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e95dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e95e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e95e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e95e4: 0x0  nop
    ctx->pc = 0x2e95e4u;
    // NOP
    // 0x2e95e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e95e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e95ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e95ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e95f0: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x2e95f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e95f4:
    // 0x2e95f4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x2e95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x2e95f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e95f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e95fc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2e95fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e9600: 0x0  nop
    ctx->pc = 0x2e9600u;
    // NOP
    // 0x2e9604: 0x0  nop
    ctx->pc = 0x2e9604u;
    // NOP
    // 0x2e9608: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2e9608u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e960c: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x2e960cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x2e9610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9614: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2e9614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2e9618: 0xc4401640  lwc1        $f0, 0x1640($v0)
    ctx->pc = 0x2e9618u;
    { uint32_t bits = FAST_READ32(0x499AC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e961c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e961cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9620: 0x0  nop
    ctx->pc = 0x2e9620u;
    // NOP
    // 0x2e9624: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E9624u;
    {
        const bool branch_taken_0x2e9624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9624) {
            ctx->pc = 0x2E9628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9624u;
            // 0x2e9628: 0xc4561644  lwc1        $f22, 0x1644($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E962Cu;
            goto label_2e962c;
        }
    }
    ctx->pc = 0x2E962Cu;
label_2e962c:
    // 0x2e962c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e962cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9630: 0xc0f7da4  jal         func_3DF690
    ctx->pc = 0x2E9630u;
    SET_GPR_U32(ctx, 31, 0x2E9638u);
    ctx->pc = 0x2E9634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9630u;
    // 0x2e9634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2E9630u, 0x2E9638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9638u;
label_2e9638:
    // 0x2e9638: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E9638u;
    {
        const bool branch_taken_0x2e9638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9638) {
            ctx->pc = 0x2E963Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9638u;
            // 0x2e963c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9660u;
            goto label_2e9660;
        }
    }
    ctx->pc = 0x2E9640u;
    // 0x2e9640: 0xc0f7da0  jal         func_3DF680
    ctx->pc = 0x2E9640u;
    SET_GPR_U32(ctx, 31, 0x2E9648u);
    ctx->pc = 0x2E9644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9640u;
    // 0x2e9644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x2E9640u, 0x2E9648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9648u;
label_2e9648:
    // 0x2e9648: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9648u;
    {
        const bool branch_taken_0x2e9648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9648) {
            ctx->pc = 0x2E964Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9648u;
            // 0x2e964c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9660u;
            goto label_2e9660;
        }
    }
    ctx->pc = 0x2E9650u;
    // 0x2e9650: 0xc0f7da8  jal         func_3DF6A0
    ctx->pc = 0x2E9650u;
    SET_GPR_U32(ctx, 31, 0x2E9658u);
    ctx->pc = 0x2E9654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9650u;
    // 0x2e9654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x2E9650u, 0x2E9658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9658u;
label_2e9658:
    // 0x2e9658: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E9658u;
    {
        const bool branch_taken_0x2e9658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9658) {
            ctx->pc = 0x2E965Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9658u;
            // 0x2e965c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9660u;
            goto label_2e9660;
        }
    }
    ctx->pc = 0x2E9660u;
label_2e9660:
    // 0x2e9660: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E9660u;
    {
        const bool branch_taken_0x2e9660 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9660u;
        // 0x2e9664: 0x34038000  ori         $v1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9660) {
            ctx->pc = 0x2E9698u;
            goto label_2e9698;
        }
    }
    ctx->pc = 0x2E9668u;
    // 0x2e9668: 0x26420480  addiu       $v0, $s2, 0x480
    ctx->pc = 0x2e9668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
    // 0x2e966c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9674: 0xc454164c  lwc1        $f20, 0x164C($v0)
    ctx->pc = 0x2e9674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e9678: 0xc0be5e2  jal         func_2F9788
    ctx->pc = 0x2E9678u;
    SET_GPR_U32(ctx, 31, 0x2E9680u);
    ctx->pc = 0x2E967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9678u;
    // 0x2e967c: 0xc4551648  lwc1        $f21, 0x1648($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9788u, 0x2E9678u, 0x2E9680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9680u;
label_2e9680:
    // 0x2e9680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9684: 0x0  nop
    ctx->pc = 0x2e9684u;
    // NOP
    // 0x2e9688: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e968c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2e968cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e9690: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x2e9690u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x2e9694: 0x4615b580  add.s       $f22, $f22, $f21
    ctx->pc = 0x2e9694u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
label_2e9698:
    // 0x2e9698: 0xc60110e0  lwc1        $f1, 0x10E0($s0)
    ctx->pc = 0x2e9698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e969c: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x2e969cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e96a0: 0x0  nop
    ctx->pc = 0x2e96a0u;
    // NOP
    // 0x2e96a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E96A4u;
    {
        const bool branch_taken_0x2e96a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96A4u;
        // 0x2e96a8: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96a4) {
            ctx->pc = 0x2E96B0u;
            goto label_2e96b0;
        }
    }
    ctx->pc = 0x2E96ACu;
    // 0x2e96ac: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2e96acu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2e96b0:
    // 0x2e96b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e96b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e96b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e96b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e96b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e96b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e96bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e96bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e96c0: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2e96c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e96c4: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2e96c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e96c8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2e96c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e96cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E96CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E96D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96CCu;
        // 0x2e96d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E96CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E96D4u;
    // 0x2e96d4: 0x0  nop
    ctx->pc = 0x2e96d4u;
    // NOP
    ctx->pc = 0x2e96d8u;
}
