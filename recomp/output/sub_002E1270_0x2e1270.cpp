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

// Function: sub_002E1270
// Address: 0x2e1270 - 0x2e1360
void sub_002E1270_0x2e1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1270_0x2e1270");
#endif

    switch (ctx->pc) {
        case 0x2e1308u: goto label_2e1308;
        default: break;
    }

    ctx->pc = 0x2e1270u;

    // 0x2e1270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e1274: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e1274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e1278: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e127c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e127cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e1280: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x2e1280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x2e1284: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x2e1284u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1288: 0x24510020  addiu       $s1, $v0, 0x20
    ctx->pc = 0x2e1288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e128c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2e128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e1290: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2e1290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e1294: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2e1294u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e1298: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2e1298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e129c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2e129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e12a0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2e12a0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2e12a4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2e12a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e12a8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2e12a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e12ac: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2e12acu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e12b0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2e12b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2e12b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e12b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e12b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e12b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e12bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e12bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e12c0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2e12c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e12c4: 0x0  nop
    ctx->pc = 0x2e12c4u;
    // NOP
    // 0x2e12c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E12C8u;
    {
        const bool branch_taken_0x2e12c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e12c8) {
            ctx->pc = 0x2E12D8u;
            goto label_2e12d8;
        }
    }
    ctx->pc = 0x2E12D0u;
    // 0x2e12d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E12D0u;
    {
        const bool branch_taken_0x2e12d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12D0u;
        // 0x2e12d4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12d0) {
            ctx->pc = 0x2E12E8u;
            goto label_2e12e8;
        }
    }
    ctx->pc = 0x2E12D8u;
label_2e12d8:
    // 0x2e12d8: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x2e12d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e12dc: 0x0  nop
    ctx->pc = 0x2e12dcu;
    // NOP
    // 0x2e12e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E12E0u;
    {
        const bool branch_taken_0x2e12e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e12e0) {
            ctx->pc = 0x2E12E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E12E0u;
            // 0x2e12e4: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E12E8u;
            goto label_2e12e8;
        }
    }
    ctx->pc = 0x2E12E8u;
label_2e12e8:
    // 0x2e12e8: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x2e12e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2e12ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e12ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e12f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e12f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e12f4: 0x0  nop
    ctx->pc = 0x2e12f4u;
    // NOP
    // 0x2e12f8: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2e12f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2e12fc: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2e12fcu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2e1300: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2E1300u;
    SET_GPR_U32(ctx, 31, 0x2E1308u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2E1300u, 0x2E1308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1308u;
label_2e1308:
    // 0x2e1308: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x2e1308u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x2e130c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2e130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e1310: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2e1310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e1314: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2e1314u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e1318: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2e1318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e131c: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2e131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e1320: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2e1320u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2e1324: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2e1324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e1328: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x2e1328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e132c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2e132cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e1330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1334: 0x0  nop
    ctx->pc = 0x2e1334u;
    // NOP
    // 0x2e1338: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e1338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e133c: 0x0  nop
    ctx->pc = 0x2e133cu;
    // NOP
    // 0x2e1340: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1340u;
    {
        const bool branch_taken_0x2e1340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1340) {
            ctx->pc = 0x2E1344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1340u;
            // 0x2e1344: 0x46002107  neg.s       $f4, $f4 (Delay Slot)
            ctx->f[4] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1348u;
            goto label_2e1348;
        }
    }
    ctx->pc = 0x2E1348u;
label_2e1348:
    // 0x2e1348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e134c: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x2e134cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
    // 0x2e1350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e1350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1354: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e1354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1358: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1358u;
        // 0x2e135c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1360u;
}
