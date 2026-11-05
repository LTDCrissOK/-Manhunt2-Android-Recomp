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

// Function: sub_00152740
// Address: 0x152740 - 0x152830
void sub_00152740_0x152740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152740_0x152740");
#endif

    switch (ctx->pc) {
        case 0x152814u: goto label_152814;
        default: break;
    }

    ctx->pc = 0x152740u;

    // 0x152740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152744: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x152744u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15274c: 0x8d070968  lw          $a3, 0x968($t0)
    ctx->pc = 0x15274cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2408)));
    // 0x152750: 0x10e00032  beqz        $a3, . + 4 + (0x32 << 2)
    ctx->pc = 0x152750u;
    {
        const bool branch_taken_0x152750 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x152754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152750u;
        // 0x152754: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152750) {
            ctx->pc = 0x15281Cu;
            goto label_15281c;
        }
    }
    ctx->pc = 0x152758u;
    // 0x152758: 0x8ce200bc  lw          $v0, 0xBC($a3)
    ctx->pc = 0x152758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 188)));
    // 0x15275c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x15275cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x152760: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x152760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x152764: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x152764u;
    {
        const bool branch_taken_0x152764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x152768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152764u;
        // 0x152768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152764) {
            ctx->pc = 0x152820u;
            goto label_152820;
        }
    }
    ctx->pc = 0x15276Cu;
    // 0x15276c: 0x9103046c  lbu         $v1, 0x46C($t0)
    ctx->pc = 0x15276cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1132)));
    // 0x152770: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x152770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x152774: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x152774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x152778: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x152778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x15277c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15277cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x152780: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x152780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x152784: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x152784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x152788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15278c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x15278cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x152790: 0x8c830108  lw          $v1, 0x108($a0)
    ctx->pc = 0x152790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x152794: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x152794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x152798: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x152798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x15279c: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x15279cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x1527a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1527A0u;
    {
        const bool branch_taken_0x1527a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1527A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527A0u;
        // 0x1527a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527a0) {
            ctx->pc = 0x1527B0u;
            goto label_1527b0;
        }
    }
    ctx->pc = 0x1527A8u;
    // 0x1527a8: 0x8c62107c  lw          $v0, 0x107C($v1)
    ctx->pc = 0x1527a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4220)));
    // 0x1527ac: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x1527acu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1527b0:
    // 0x1527b0: 0xad0004d8  sw          $zero, 0x4D8($t0)
    ctx->pc = 0x1527b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1240), GPR_U32(ctx, 0));
    // 0x1527b4: 0x24e50258  addiu       $a1, $a3, 0x258
    ctx->pc = 0x1527b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 600));
    // 0x1527b8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1527b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1527bc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1527BCu;
    {
        const bool branch_taken_0x1527bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1527C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527BCu;
        // 0x1527c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527bc) {
            ctx->pc = 0x1527D8u;
            goto label_1527d8;
        }
    }
    ctx->pc = 0x1527C4u;
    // 0x1527c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1527c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1527c8: 0x0  nop
    ctx->pc = 0x1527c8u;
    // NOP
    // 0x1527cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1527ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1527d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1527D0u;
    {
        const bool branch_taken_0x1527d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1527d0) {
            ctx->pc = 0x1527F0u;
            goto label_1527f0;
        }
    }
    ctx->pc = 0x1527D8u;
label_1527d8:
    // 0x1527d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1527d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1527dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1527dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1527e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1527e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1527e4: 0x0  nop
    ctx->pc = 0x1527e4u;
    // NOP
    // 0x1527e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1527e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1527ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1527ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1527f0:
    // 0x1527f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1527f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1527f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1527f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1527f8: 0x0  nop
    ctx->pc = 0x1527f8u;
    // NOP
    // 0x1527fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1527fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152800: 0x0  nop
    ctx->pc = 0x152800u;
    // NOP
    // 0x152804: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x152804u;
    {
        const bool branch_taken_0x152804 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x152808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152804u;
        // 0x152808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152804) {
            ctx->pc = 0x152820u;
            goto label_152820;
        }
    }
    ctx->pc = 0x15280Cu;
    // 0x15280c: 0xc04e450  jal         func_139140
    ctx->pc = 0x15280Cu;
    SET_GPR_U32(ctx, 31, 0x152814u);
    ctx->pc = 0x152810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15280Cu;
    // 0x152810: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139140u, 0x15280Cu, 0x152814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152814u;
label_152814:
    // 0x152814: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x152814u;
    {
        const bool branch_taken_0x152814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152814u;
        // 0x152818: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152814) {
            ctx->pc = 0x152824u;
            goto label_152824;
        }
    }
    ctx->pc = 0x15281Cu;
label_15281c:
    // 0x15281c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15281cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152820:
    // 0x152820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_152824:
    // 0x152824: 0x3e00008  jr          $ra
    ctx->pc = 0x152824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152824u;
        // 0x152828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15282Cu;
    // 0x15282c: 0x0  nop
    ctx->pc = 0x15282cu;
    // NOP
    ctx->pc = 0x152830u;
}
