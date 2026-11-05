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

// Function: sub_00377550
// Address: 0x377550 - 0x3776e8
void sub_00377550_0x377550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377550_0x377550");
#endif

    switch (ctx->pc) {
        case 0x377584u: goto label_377584;
        case 0x3775a4u: goto label_3775a4;
        case 0x3775ecu: goto label_3775ec;
        default: break;
    }

    ctx->pc = 0x377550u;

    // 0x377550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x377550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x377554: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x377554u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x377558: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x377558u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x37755c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x37755cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x377560: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x377560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x377564: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x377564u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x377568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x377568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37756c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x37756cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x377570: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x377570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x377574: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x377574u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x377578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x377578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37757c: 0xc0dda38  jal         func_3768E0
    ctx->pc = 0x37757Cu;
    SET_GPR_U32(ctx, 31, 0x377584u);
    ctx->pc = 0x377580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37757Cu;
    // 0x377580: 0x2611f910  addiu       $s1, $s0, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3768E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3768E0u, 0x37757Cu, 0x377584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377584u;
label_377584:
    // 0x377584: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x377584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x377588: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x377588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37758c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x37758cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x377590: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x377590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x377594: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x377594u;
    {
        const bool branch_taken_0x377594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377594u;
        // 0x377598: 0x8e02f910  lw          $v0, -0x6F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377594) {
            ctx->pc = 0x3775A8u;
            goto label_3775a8;
        }
    }
    ctx->pc = 0x37759Cu;
    // 0x37759c: 0xc0dc442  jal         func_371108
    ctx->pc = 0x37759Cu;
    SET_GPR_U32(ctx, 31, 0x3775A4u);
    ctx->pc = 0x3775A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37759Cu;
    // 0x3775a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x37759Cu, 0x3775A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3775A4u;
label_3775a4:
    // 0x3775a4: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x3775a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
label_3775a8:
    // 0x3775a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3775a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3775ac: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x3775acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x3775b0: 0x3405d805  ori         $a1, $zero, 0xD805
    ctx->pc = 0x3775b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55301);
    // 0x3775b4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3775b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3775b8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x3775b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x3775bc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3775bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3775c0: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x3775c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x3775c4: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x3775c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x3775c8: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x3775c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x3775cc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3775ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3775d0: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x3775d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x3775d4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3775d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3775d8: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x3775d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3775dc: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3775DCu;
    {
        const bool branch_taken_0x3775dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3775dc) {
            ctx->pc = 0x3775E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3775DCu;
            // 0x3775e0: 0x4600a207  neg.s       $f8, $f20 (Delay Slot)
            ctx->f[8] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3775F0u;
            goto label_3775f0;
        }
    }
    ctx->pc = 0x3775E4u;
    // 0x3775e4: 0xc0dc442  jal         func_371108
    ctx->pc = 0x3775E4u;
    SET_GPR_U32(ctx, 31, 0x3775ECu);
    ctx->pc = 0x3775E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3775E4u;
    // 0x3775e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x3775E4u, 0x3775ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3775ECu;
label_3775ec:
    // 0x3775ec: 0x4600a207  neg.s       $f8, $f20
    ctx->pc = 0x3775ecu;
    ctx->f[8] = FPU_NEG_S(ctx->f[20]);
label_3775f0:
    // 0x3775f0: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x3775f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x3775f4: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x3775f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x3775f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3775f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3775fc: 0x4600a987  neg.s       $f6, $f21
    ctx->pc = 0x3775fcu;
    ctx->f[6] = FPU_NEG_S(ctx->f[21]);
    // 0x377600: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x377600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x377604: 0x4600b147  neg.s       $f5, $f22
    ctx->pc = 0x377604u;
    ctx->f[5] = FPU_NEG_S(ctx->f[22]);
    // 0x377608: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x377608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x37760c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x37760cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x377610: 0x4608a001  sub.s       $f0, $f20, $f8
    ctx->pc = 0x377610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[8]);
    // 0x377614: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x377614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x377618: 0x4606a841  sub.s       $f1, $f21, $f6
    ctx->pc = 0x377618u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[6]);
    // 0x37761c: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x37761cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x377620: 0x4605b081  sub.s       $f2, $f22, $f5
    ctx->pc = 0x377620u;
    ctx->f[2] = FPU_SUB_S(ctx->f[22], ctx->f[5]);
    // 0x377624: 0x3c01c700  lui         $at, 0xC700
    ctx->pc = 0x377624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50944 << 16));
    // 0x377628: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x377628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x37762c: 0x0  nop
    ctx->pc = 0x37762cu;
    // NOP
    // 0x377630: 0x0  nop
    ctx->pc = 0x377630u;
    // NOP
    // 0x377634: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x377634u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x377638: 0xe447001c  swc1        $f7, 0x1C($v0)
    ctx->pc = 0x377638u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x37763c: 0x0  nop
    ctx->pc = 0x37763cu;
    // NOP
    // 0x377640: 0x0  nop
    ctx->pc = 0x377640u;
    // NOP
    // 0x377644: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x377644u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x377648: 0xe447000c  swc1        $f7, 0xC($v0)
    ctx->pc = 0x377648u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x37764c: 0x0  nop
    ctx->pc = 0x37764cu;
    // NOP
    // 0x377650: 0x0  nop
    ctx->pc = 0x377650u;
    // NOP
    // 0x377654: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x377654u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x377658: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x377658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
    // 0x37765c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37765cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x377660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x377664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x377664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377668: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x377668u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x37766c: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x37766cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x377670: 0x460409c2  mul.s       $f7, $f1, $f4
    ctx->pc = 0x377670u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x377674: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x377674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x377678: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x377678u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x37767c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x37767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x377680: 0x46034201  sub.s       $f8, $f8, $f3
    ctx->pc = 0x377680u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
    // 0x377684: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x377684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x377688: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x377688u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x37768c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x37768cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x377690: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x377690u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x377694: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x377694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x377698: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x377698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x37769c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x37769cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3776a0: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x3776a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3776a4: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x3776a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x3776a8: 0xe4480010  swc1        $f8, 0x10($v0)
    ctx->pc = 0x3776a8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x3776ac: 0xe4460014  swc1        $f6, 0x14($v0)
    ctx->pc = 0x3776acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x3776b0: 0xe4450018  swc1        $f5, 0x18($v0)
    ctx->pc = 0x3776b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x3776b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3776B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3776B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3776B4u;
        // 0x3776b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3776B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3776BCu;
    // 0x3776bc: 0x0  nop
    ctx->pc = 0x3776bcu;
    // NOP
    // 0x3776c0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3776c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3776c4: 0x0  nop
    ctx->pc = 0x3776c4u;
    // NOP
    // 0x3776c8: 0x0  nop
    ctx->pc = 0x3776c8u;
    // NOP
    // 0x3776cc: 0x0  nop
    ctx->pc = 0x3776ccu;
    // NOP
    // 0x3776d0: 0x0  nop
    ctx->pc = 0x3776d0u;
    // NOP
    // 0x3776d4: 0x0  nop
    ctx->pc = 0x3776d4u;
    // NOP
    // 0x3776d8: 0x0  nop
    ctx->pc = 0x3776d8u;
    // NOP
    // 0x3776dc: 0x0  nop
    ctx->pc = 0x3776dcu;
    // NOP
    // 0x3776e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3776e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3776e4: 0x0  nop
    ctx->pc = 0x3776e4u;
    // NOP
    ctx->pc = 0x3776e8u;
}
