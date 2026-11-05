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

// Function: sub_001EB350
// Address: 0x1eb350 - 0x1eb510
void sub_001EB350_0x1eb350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB350_0x1eb350");
#endif

    switch (ctx->pc) {
        case 0x1eb3b8u: goto label_1eb3b8;
        case 0x1eb434u: goto label_1eb434;
        case 0x1eb448u: goto label_1eb448;
        case 0x1eb4d8u: goto label_1eb4d8;
        default: break;
    }

    ctx->pc = 0x1eb350u;

    // 0x1eb350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eb350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eb354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eb354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eb358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eb358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eb35c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eb35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb360: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1eb360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1eb364: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1eb364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1eb368: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eb368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eb36c: 0x92230960  lbu         $v1, 0x960($s1)
    ctx->pc = 0x1eb36cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2400)));
    // 0x1eb370: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x1eb370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x1eb374: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1EB374u;
    {
        const bool branch_taken_0x1eb374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB374u;
        // 0x1eb378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb374) {
            ctx->pc = 0x1EB4F0u;
            goto label_1eb4f0;
        }
    }
    ctx->pc = 0x1EB37Cu;
    // 0x1eb37c: 0x92220961  lbu         $v0, 0x961($s1)
    ctx->pc = 0x1eb37cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2401)));
    // 0x1eb380: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1eb380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb384: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1eb384u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb388: 0x2e43001e  sltiu       $v1, $s2, 0x1E
    ctx->pc = 0x1eb388u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x1eb38c: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EB38Cu;
    {
        const bool branch_taken_0x1eb38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB38Cu;
        // 0x1eb390: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb38c) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB394u;
    // 0x1eb394: 0x92240960  lbu         $a0, 0x960($s1)
    ctx->pc = 0x1eb394u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2400)));
    // 0x1eb398: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x1eb398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x1eb39c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x1eb39cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x1eb3a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eb3a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb3a4: 0x2c82001e  sltiu       $v0, $a0, 0x1E
    ctx->pc = 0x1eb3a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x1eb3a8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EB3A8u;
    {
        const bool branch_taken_0x1eb3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3A8u;
        // 0x1eb3ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3a8) {
            ctx->pc = 0x1EB3ECu;
            goto label_1eb3ec;
        }
    }
    ctx->pc = 0x1EB3B0u;
    // 0x1eb3b0: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1eb3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1eb3b4: 0x861818  mult        $v1, $a0, $a2
    ctx->pc = 0x1eb3b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1eb3b8:
    // 0x1eb3b8: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1eb3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1eb3bc: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1eb3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb3c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1eb3c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb3c4: 0x0  nop
    ctx->pc = 0x1eb3c4u;
    // NOP
    // 0x1eb3c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB3C8u;
    {
        const bool branch_taken_0x1eb3c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3C8u;
        // 0x1eb3cc: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3c8) {
            ctx->pc = 0x1EB3D8u;
            goto label_1eb3d8;
        }
    }
    ctx->pc = 0x1EB3D0u;
    // 0x1eb3d0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1eb3d0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1eb3d4: 0x22e03  sra         $a1, $v0, 24
    ctx->pc = 0x1eb3d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
label_1eb3d8:
    // 0x1eb3d8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1eb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1eb3dc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1eb3dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb3e0: 0x2c83001e  sltiu       $v1, $a0, 0x1E
    ctx->pc = 0x1eb3e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x1eb3e4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1EB3E4u;
    {
        const bool branch_taken_0x1eb3e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3E4u;
        // 0x1eb3e8: 0x861818  mult        $v1, $a0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3e4) {
            ctx->pc = 0x1EB3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb3b8;
        }
    }
    ctx->pc = 0x1EB3ECu;
label_1eb3ec:
    // 0x1eb3ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1eb3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eb3f0: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB3F0u;
    {
        const bool branch_taken_0x1eb3f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3F0u;
        // 0x1eb3f4: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3f0) {
            ctx->pc = 0x1EB400u;
            goto label_1eb400;
        }
    }
    ctx->pc = 0x1EB3F8u;
    // 0x1eb3f8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1EB3F8u;
    {
        const bool branch_taken_0x1eb3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3F8u;
        // 0x1eb3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3f8) {
            ctx->pc = 0x1EB4F0u;
            goto label_1eb4f0;
        }
    }
    ctx->pc = 0x1EB400u;
label_1eb400:
    // 0x1eb400: 0xc62109a4  lwc1        $f1, 0x9A4($s1)
    ctx->pc = 0x1eb400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb404: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1eb404u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1eb408: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1eb408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1eb40c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1eb40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb410: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eb410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb414: 0x0  nop
    ctx->pc = 0x1eb414u;
    // NOP
    // 0x1eb418: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x1EB418u;
    {
        const bool branch_taken_0x1eb418 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB418u;
        // 0x1eb41c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb418) {
            ctx->pc = 0x1EB4F0u;
            goto label_1eb4f0;
        }
    }
    ctx->pc = 0x1EB420u;
    // 0x1eb420: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x1eb420u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1eb424: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1eb424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb428:
    // 0x1eb428: 0x26300970  addiu       $s0, $s1, 0x970
    ctx->pc = 0x1eb428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2416));
    // 0x1eb42c: 0xc07ac1a  jal         func_1EB068
    ctx->pc = 0x1EB42Cu;
    SET_GPR_U32(ctx, 31, 0x1EB434u);
    ctx->pc = 0x1EB430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB42Cu;
    // 0x1eb430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB068u, 0x1EB42Cu, 0x1EB434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB434u;
label_1eb434:
    // 0x1eb434: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB434u;
    {
        const bool branch_taken_0x1eb434 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB434u;
        // 0x1eb438: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb434) {
            ctx->pc = 0x1EB44Cu;
            goto label_1eb44c;
        }
    }
    ctx->pc = 0x1EB43Cu;
    // 0x1eb43c: 0x2441018  mult        $v0, $s2, $a0
    ctx->pc = 0x1eb43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eb440: 0xc07ac3c  jal         func_1EB0F0
    ctx->pc = 0x1EB440u;
    SET_GPR_U32(ctx, 31, 0x1EB448u);
    ctx->pc = 0x1EB444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB440u;
    // 0x1eb444: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB0F0u, 0x1EB440u, 0x1EB448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB448u;
label_1eb448:
    // 0x1eb448: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1eb448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1eb44c:
    // 0x1eb44c: 0x92250970  lbu         $a1, 0x970($s1)
    ctx->pc = 0x1eb44cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2416)));
    // 0x1eb450: 0x2441818  mult        $v1, $s2, $a0
    ctx->pc = 0x1eb450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1eb454: 0x26260990  addiu       $a2, $s1, 0x990
    ctx->pc = 0x1eb454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2448));
    // 0x1eb458: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1eb458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1eb45c: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x1eb45cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1eb460: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1eb460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eb464: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1eb464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1eb468: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1eb468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eb46c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1eb46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1eb470: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1eb470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1eb474: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1eb474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1eb478: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1eb478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1eb47c: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x1eb47cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x1eb480: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1eb480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eb484: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1eb484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1eb488: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1eb488u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1eb48c: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1eb48cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb490: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1eb490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1eb494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eb494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb498: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x1eb498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x1eb49c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1eb49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb4a0: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1eb4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1eb4a4: 0x92030038  lbu         $v1, 0x38($s0)
    ctx->pc = 0x1eb4a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1eb4a8: 0xa0430038  sb          $v1, 0x38($v0)
    ctx->pc = 0x1eb4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb4ac: 0x92050039  lbu         $a1, 0x39($s0)
    ctx->pc = 0x1eb4acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    // 0x1eb4b0: 0xa0450039  sb          $a1, 0x39($v0)
    ctx->pc = 0x1eb4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 57), (uint8_t)GPR_U32(ctx, 5));
    // 0x1eb4b4: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1eb4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1eb4b8: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x1eb4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x1eb4bc: 0x92050040  lbu         $a1, 0x40($s0)
    ctx->pc = 0x1eb4bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1eb4c0: 0xa0450040  sb          $a1, 0x40($v0)
    ctx->pc = 0x1eb4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x1eb4c4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1eb4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1eb4c8: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1eb4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1eb4cc: 0x92050048  lbu         $a1, 0x48($s0)
    ctx->pc = 0x1eb4ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1eb4d0: 0xc07ac20  jal         func_1EB080
    ctx->pc = 0x1EB4D0u;
    SET_GPR_U32(ctx, 31, 0x1EB4D8u);
    ctx->pc = 0x1EB4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB4D0u;
    // 0x1eb4d4: 0xa0450048  sb          $a1, 0x48($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB080u, 0x1EB4D0u, 0x1EB4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB4D8u;
label_1eb4d8:
    // 0x1eb4d8: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB4D8u;
    {
        const bool branch_taken_0x1eb4d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb4d8) {
            ctx->pc = 0x1EB4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB4D8u;
            // 0x1eb4dc: 0x8e220984  lw          $v0, 0x984($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB4F0u;
            goto label_1eb4f0;
        }
    }
    ctx->pc = 0x1EB4E0u;
    // 0x1eb4e0: 0x92220961  lbu         $v0, 0x961($s1)
    ctx->pc = 0x1eb4e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2401)));
    // 0x1eb4e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eb4e8: 0xa2220961  sb          $v0, 0x961($s1)
    ctx->pc = 0x1eb4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2401), (uint8_t)GPR_U32(ctx, 2));
    // 0x1eb4ec: 0x8e220984  lw          $v0, 0x984($s1)
    ctx->pc = 0x1eb4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2436)));
label_1eb4f0:
    // 0x1eb4f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eb4f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb4f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eb4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eb4f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eb4f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb4fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1eb4fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eb500: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eb500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb504: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB504u;
        // 0x1eb508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB50Cu;
    // 0x1eb50c: 0x0  nop
    ctx->pc = 0x1eb50cu;
    // NOP
    ctx->pc = 0x1eb510u;
}
