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

// Function: sub_00357698
// Address: 0x357698 - 0x3578a8
void sub_00357698_0x357698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357698_0x357698");
#endif

    switch (ctx->pc) {
        case 0x357704u: goto label_357704;
        case 0x357740u: goto label_357740;
        case 0x35775cu: goto label_35775c;
        case 0x35777cu: goto label_35777c;
        case 0x3577a4u: goto label_3577a4;
        case 0x3577c0u: goto label_3577c0;
        case 0x3577d0u: goto label_3577d0;
        case 0x3577e8u: goto label_3577e8;
        case 0x3577f4u: goto label_3577f4;
        case 0x35782cu: goto label_35782c;
        case 0x357868u: goto label_357868;
        case 0x357878u: goto label_357878;
        default: break;
    }

    ctx->pc = 0x357698u;

    // 0x357698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x357698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35769c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35769cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3576a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3576a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3576a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3576a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3576a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3576a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3576ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3576acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3576b0: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x3576b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x3576b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3576b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3576b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3576b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3576bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3576bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3576c0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x3576c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3576c4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3576c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3576c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3576c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3576cc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3576CCu;
    {
        const bool branch_taken_0x3576cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3576D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3576CCu;
        // 0x3576d0: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3576cc) {
            ctx->pc = 0x357728u;
            goto label_357728;
        }
    }
    ctx->pc = 0x3576D4u;
    // 0x3576d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3576d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3576d8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3576d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3576dc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3576dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3576e0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3576e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3576e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3576e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3576e8: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x3576e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3576ec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3576ECu;
    {
        const bool branch_taken_0x3576ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3576F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3576ECu;
        // 0x3576f0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3576ec) {
            ctx->pc = 0x357700u;
            goto label_357700;
        }
    }
    ctx->pc = 0x3576F4u;
    // 0x3576f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3576F4u;
    {
        const bool branch_taken_0x3576f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3576F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3576F4u;
        // 0x3576f8: 0x90d10002  lbu         $s1, 0x2($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3576f4) {
            ctx->pc = 0x357728u;
            goto label_357728;
        }
    }
    ctx->pc = 0x3576FCu;
    // 0x3576fc: 0x0  nop
    ctx->pc = 0x3576fcu;
    // NOP
label_357700:
    // 0x357700: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x357700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_357704:
    // 0x357704: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x357704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x357708: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x357708u;
    {
        const bool branch_taken_0x357708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357708u;
        // 0x35770c: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357708) {
            ctx->pc = 0x357728u;
            goto label_357728;
        }
    }
    ctx->pc = 0x357710u;
    // 0x357710: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x357710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x357714: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x357714u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x357718: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x357718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x35771c: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x35771Cu;
    {
        const bool branch_taken_0x35771c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35771c) {
            ctx->pc = 0x357720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35771Cu;
            // 0x357720: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357704;
        }
    }
    ctx->pc = 0x357724u;
    // 0x357724: 0x90710002  lbu         $s1, 0x2($v1)
    ctx->pc = 0x357724u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_357728:
    // 0x357728: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x357728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35772c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x35772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x357730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357734: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x357734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x357738: 0xc0d5c32  jal         func_3570C8
    ctx->pc = 0x357738u;
    SET_GPR_U32(ctx, 31, 0x357740u);
    ctx->pc = 0x35773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357738u;
    // 0x35773c: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570C8u, 0x357738u, 0x357740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357740u;
label_357740:
    // 0x357740: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x357740u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x357744: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x357744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x357748: 0x5051002b  beql        $v0, $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x357748u;
    {
        const bool branch_taken_0x357748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x357748) {
            ctx->pc = 0x35774Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357748u;
            // 0x35774c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3577F8u;
            goto label_3577f8;
        }
    }
    ctx->pc = 0x357750u;
    // 0x357750: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x357750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x357754: 0xc0d5bd2  jal         func_356F48
    ctx->pc = 0x357754u;
    SET_GPR_U32(ctx, 31, 0x35775Cu);
    ctx->pc = 0x357758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357754u;
    // 0x357758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356F48u, 0x357754u, 0x35775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35775Cu;
label_35775c:
    // 0x35775c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x35775cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x357760: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x357760u;
    {
        const bool branch_taken_0x357760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x357764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357760u;
        // 0x357764: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357760) {
            ctx->pc = 0x35777Cu;
            goto label_35777c;
        }
    }
    ctx->pc = 0x357768u;
    // 0x357768: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x357768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x35776c: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35776Cu;
    {
        const bool branch_taken_0x35776c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x35776c) {
            ctx->pc = 0x357770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35776Cu;
            // 0x357770: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357780u;
            goto label_357780;
        }
    }
    ctx->pc = 0x357774u;
    // 0x357774: 0xc0742a0  jal         func_1D0A80
    ctx->pc = 0x357774u;
    SET_GPR_U32(ctx, 31, 0x35777Cu);
    ctx->pc = 0x357778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357774u;
    // 0x357778: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0A80u, 0x357774u, 0x35777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35777Cu;
label_35777c:
    // 0x35777c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x35777cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_357780:
    // 0x357780: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x357780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x357784: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x357784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x357788: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x357788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x35778c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x357790: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x357790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x357794: 0x1465000c  bne         $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x357794u;
    {
        const bool branch_taken_0x357794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x357798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357794u;
        // 0x357798: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357794) {
            ctx->pc = 0x3577C8u;
            goto label_3577c8;
        }
    }
    ctx->pc = 0x35779Cu;
    // 0x35779c: 0xc0d5e2a  jal         func_3578A8
    ctx->pc = 0x35779Cu;
    SET_GPR_U32(ctx, 31, 0x3577A4u);
    ctx->pc = 0x3577A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35779Cu;
    // 0x3577a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3578A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3578A8u, 0x35779Cu, 0x3577A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3577A4u;
label_3577a4:
    // 0x3577a4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x3577a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3577a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3577a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3577ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3577acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3577b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3577b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3577b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3577b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3577b8: 0xc07421a  jal         func_1D0868
    ctx->pc = 0x3577B8u;
    SET_GPR_U32(ctx, 31, 0x3577C0u);
    ctx->pc = 0x3577BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3577B8u;
    // 0x3577bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0868u, 0x3577B8u, 0x3577C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3577C0u;
label_3577c0:
    // 0x3577c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3577C0u;
    {
        const bool branch_taken_0x3577c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3577c0) {
            ctx->pc = 0x3577E8u;
            goto label_3577e8;
        }
    }
    ctx->pc = 0x3577C8u;
label_3577c8:
    // 0x3577c8: 0xc0d5e2a  jal         func_3578A8
    ctx->pc = 0x3577C8u;
    SET_GPR_U32(ctx, 31, 0x3577D0u);
    ctx->pc = 0x3577CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3577C8u;
    // 0x3577cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3578A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3578A8u, 0x3577C8u, 0x3577D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3577D0u;
label_3577d0:
    // 0x3577d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3577d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3577d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3577d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3577d8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x3577d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3577dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3577dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3577e0: 0xc07421a  jal         func_1D0868
    ctx->pc = 0x3577E0u;
    SET_GPR_U32(ctx, 31, 0x3577E8u);
    ctx->pc = 0x3577E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3577E0u;
    // 0x3577e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0868u, 0x3577E0u, 0x3577E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3577E8u;
label_3577e8:
    // 0x3577e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3577e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3577ec: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x3577ECu;
    SET_GPR_U32(ctx, 31, 0x3577F4u);
    ctx->pc = 0x3577F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3577ECu;
    // 0x3577f0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x3577ECu, 0x3577F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3577F4u;
label_3577f4:
    // 0x3577f4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x3577f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3577f8:
    // 0x3577f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3577f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3577fc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3577fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x357800: 0xc4940014  lwc1        $f20, 0x14($a0)
    ctx->pc = 0x357800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x357804: 0xc6612b30  lwc1        $f1, 0x2B30($s3)
    ctx->pc = 0x357804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357808: 0xc680ca9c  lwc1        $f0, -0x3564($s4)
    ctx->pc = 0x357808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294953628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35780c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x35780cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x357810: 0x0  nop
    ctx->pc = 0x357810u;
    // NOP
    // 0x357814: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x357814u;
    {
        const bool branch_taken_0x357814 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x357818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357814u;
        // 0x357818: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x357814) {
            ctx->pc = 0x357824u;
            goto label_357824;
        }
    }
    ctx->pc = 0x35781Cu;
    // 0x35781c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x35781cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x357820: 0x4615a529  min.s       $f20, $f20, $f21
    ctx->pc = 0x357820u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[21]);
label_357824:
    // 0x357824: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x357824u;
    SET_GPR_U32(ctx, 31, 0x35782Cu);
    ctx->pc = 0x357828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357824u;
    // 0x357828: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x357824u, 0x35782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35782Cu;
label_35782c:
    // 0x35782c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x35782cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x357830: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x357830u;
    {
        const bool branch_taken_0x357830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x357830) {
            ctx->pc = 0x357834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357830u;
            // 0x357834: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357880u;
            goto label_357880;
        }
    }
    ctx->pc = 0x357838u;
    // 0x357838: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x357838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x35783c: 0x50a20010  beql        $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35783Cu;
    {
        const bool branch_taken_0x35783c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x35783c) {
            ctx->pc = 0x357840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35783Cu;
            // 0x357840: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357880u;
            goto label_357880;
        }
    }
    ctx->pc = 0x357844u;
    // 0x357844: 0x4614ad01  sub.s       $f20, $f21, $f20
    ctx->pc = 0x357844u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x357848: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x357848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35784c: 0x0  nop
    ctx->pc = 0x35784cu;
    // NOP
    // 0x357850: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x357850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x357854: 0x0  nop
    ctx->pc = 0x357854u;
    // NOP
    // 0x357858: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x357858u;
    {
        const bool branch_taken_0x357858 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357858u;
        // 0x35785c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357858) {
            ctx->pc = 0x357870u;
            goto label_357870;
        }
    }
    ctx->pc = 0x357860u;
    // 0x357860: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x357860u;
    SET_GPR_U32(ctx, 31, 0x357868u);
    ctx->pc = 0x357864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357860u;
    // 0x357864: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x357860u, 0x357868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357868u;
label_357868:
    // 0x357868: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x357868u;
    {
        const bool branch_taken_0x357868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357868u;
        // 0x35786c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357868) {
            ctx->pc = 0x357880u;
            goto label_357880;
        }
    }
    ctx->pc = 0x357870u;
label_357870:
    // 0x357870: 0xc0742a0  jal         func_1D0A80
    ctx->pc = 0x357870u;
    SET_GPR_U32(ctx, 31, 0x357878u);
    ctx->pc = 0x357874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357870u;
    // 0x357874: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0A80u, 0x357870u, 0x357878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357878u;
label_357878:
    // 0x357878: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x357878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x35787c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35787cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_357880:
    // 0x357880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357884: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x357884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357888: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x357888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35788c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35788cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357890: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x357890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357894: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x357894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x357898: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x357898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35789c: 0x3e00008  jr          $ra
    ctx->pc = 0x35789Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3578A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35789Cu;
        // 0x3578a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35789Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3578A4u;
    // 0x3578a4: 0x0  nop
    ctx->pc = 0x3578a4u;
    // NOP
    ctx->pc = 0x3578a8u;
}
