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

// Function: sub_002857A0
// Address: 0x2857a0 - 0x285ca8
void sub_002857A0_0x2857a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002857A0_0x2857a0");
#endif

    switch (ctx->pc) {
        case 0x2857e8u: goto label_2857e8;
        case 0x285840u: goto label_285840;
        case 0x28584cu: goto label_28584c;
        case 0x28587cu: goto label_28587c;
        case 0x28589cu: goto label_28589c;
        case 0x2858a4u: goto label_2858a4;
        case 0x2858b8u: goto label_2858b8;
        case 0x2858e0u: goto label_2858e0;
        case 0x285934u: goto label_285934;
        case 0x285958u: goto label_285958;
        case 0x285968u: goto label_285968;
        case 0x285994u: goto label_285994;
        case 0x2859a8u: goto label_2859a8;
        case 0x2859b8u: goto label_2859b8;
        case 0x2859e0u: goto label_2859e0;
        case 0x2859f0u: goto label_2859f0;
        case 0x285a0cu: goto label_285a0c;
        case 0x285a30u: goto label_285a30;
        case 0x285a44u: goto label_285a44;
        case 0x285a78u: goto label_285a78;
        case 0x285a80u: goto label_285a80;
        case 0x285a90u: goto label_285a90;
        case 0x285aa8u: goto label_285aa8;
        case 0x285ab0u: goto label_285ab0;
        case 0x285ac0u: goto label_285ac0;
        case 0x285aecu: goto label_285aec;
        case 0x285af4u: goto label_285af4;
        case 0x285b28u: goto label_285b28;
        case 0x285b4cu: goto label_285b4c;
        case 0x285b64u: goto label_285b64;
        case 0x285b88u: goto label_285b88;
        case 0x285bd4u: goto label_285bd4;
        default: break;
    }

    ctx->pc = 0x2857a0u;

    // 0x2857a0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2857a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2857a4: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2857a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x2857a8: 0x24439920  addiu       $v1, $v0, -0x66E0
    ctx->pc = 0x2857a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940960));
    // 0x2857ac: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x2857acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
    // 0x2857b0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2857b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2857b4: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x2857b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
    // 0x2857b8: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x2857b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x2857bc: 0x24660a00  addiu       $a2, $v1, 0xA00
    ctx->pc = 0x2857bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2560));
    // 0x2857c0: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x2857c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
    // 0x2857c4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2857c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2857c8: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x2857c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x2857cc: 0x24448f20  addiu       $a0, $v0, -0x70E0
    ctx->pc = 0x2857ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938400));
    // 0x2857d0: 0xffb50168  sd          $s5, 0x168($sp)
    ctx->pc = 0x2857d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 21));
    // 0x2857d4: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x2857d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x2857d8: 0xffb70178  sd          $s7, 0x178($sp)
    ctx->pc = 0x2857d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 23));
    // 0x2857dc: 0xffbe0180  sd          $fp, 0x180($sp)
    ctx->pc = 0x2857dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x2857e0: 0xffbf0188  sd          $ra, 0x188($sp)
    ctx->pc = 0x2857e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 31));
    // 0x2857e4: 0x0  nop
    ctx->pc = 0x2857e4u;
    // NOP
label_2857e8:
    // 0x2857e8: 0x24a2a998  addiu       $v0, $a1, -0x5668
    ctx->pc = 0x2857e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945176));
    // 0x2857ec: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2857ecu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2857f0: 0x80480001  lb          $t0, 0x1($v0)
    ctx->pc = 0x2857f0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2857f4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x2857f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2857f8: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x2857f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x2857fc: 0x24a2a998  addiu       $v0, $a1, -0x5668
    ctx->pc = 0x2857fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945176));
    // 0x285800: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x285800u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285804: 0x80480001  lb          $t0, 0x1($v0)
    ctx->pc = 0x285804u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x285808: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x285808u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x28580c: 0xa0880001  sb          $t0, 0x1($a0)
    ctx->pc = 0x28580cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x285810: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x285810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x285814: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x285814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x285818: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x285818u;
    {
        const bool branch_taken_0x285818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285818u;
        // 0x28581c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285818) {
            ctx->pc = 0x2857E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2857e8;
        }
    }
    ctx->pc = 0x285820u;
    // 0x285820: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x285820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x285824: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x285824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x285828: 0x247ec230  addiu       $fp, $v1, -0x3DD0
    ctx->pc = 0x285828u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951472));
    // 0x28582c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28582cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285830: 0x27a30124  addiu       $v1, $sp, 0x124
    ctx->pc = 0x285830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x285834: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x285834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x285838: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x285838u;
    {
        const bool branch_taken_0x285838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285838u;
        // 0x28583c: 0xafa3012c  sw          $v1, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285838) {
            ctx->pc = 0x285A90u;
            goto label_285a90;
        }
    }
    ctx->pc = 0x285840u;
label_285840:
    // 0x285840: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x285840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285844: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x285844u;
    SET_GPR_U32(ctx, 31, 0x28584Cu);
    ctx->pc = 0x285848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285844u;
    // 0x285848: 0x24e5a9b8  addiu       $a1, $a3, -0x5648 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x285844u, 0x28584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28584Cu;
label_28584c:
    // 0x28584c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28584Cu;
    {
        const bool branch_taken_0x28584c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28584Cu;
        // 0x285850: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28584c) {
            ctx->pc = 0x285870u;
            goto label_285870;
        }
    }
    ctx->pc = 0x285854u;
    // 0x285854: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x285854u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x285858: 0x3c090047  lui         $t1, 0x47
    ctx->pc = 0x285858u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)71 << 16));
    // 0x28585c: 0x8d042bc8  lw          $a0, 0x2BC8($t0)
    ctx->pc = 0x28585cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482BC8u));
    // 0x285860: 0x25259f80  addiu       $a1, $t1, -0x6080
    ctx->pc = 0x285860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942592));
    // 0x285864: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x285864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x285868: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x285868u;
    {
        const bool branch_taken_0x285868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285868u;
        // 0x28586c: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285868) {
            ctx->pc = 0x285A70u;
            goto label_285a70;
        }
    }
    ctx->pc = 0x285870u;
label_285870:
    // 0x285870: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x285870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285874: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x285874u;
    SET_GPR_U32(ctx, 31, 0x28587Cu);
    ctx->pc = 0x285878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285874u;
    // 0x285878: 0x2445a9d0  addiu       $a1, $v0, -0x5630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x285874u, 0x28587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28587Cu;
label_28587c:
    // 0x28587c: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x28587Cu;
    {
        const bool branch_taken_0x28587c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28587Cu;
        // 0x285880: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28587c) {
            ctx->pc = 0x285A38u;
            goto label_285a38;
        }
    }
    ctx->pc = 0x285884u;
    // 0x285884: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x285884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x285888: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x285888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28588c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28588cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x285890: 0x24a5a598  addiu       $a1, $a1, -0x5A68
    ctx->pc = 0x285890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944152));
    // 0x285894: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x285894u;
    SET_GPR_U32(ctx, 31, 0x28589Cu);
    ctx->pc = 0x285898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285894u;
    // 0x285898: 0x8c642bc8  lw          $a0, 0x2BC8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x285894u, 0x28589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28589Cu;
label_28589c:
    // 0x28589c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x28589Cu;
    SET_GPR_U32(ctx, 31, 0x2858A4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x28589Cu, 0x2858A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2858A4u;
label_2858a4:
    // 0x2858a4: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x2858a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2858a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2858a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2858acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858b0: 0xc0f80f2  jal         func_3E03C8
    ctx->pc = 0x2858B0u;
    SET_GPR_U32(ctx, 31, 0x2858B8u);
    ctx->pc = 0x2858B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2858B0u;
    // 0x2858b4: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E03C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E03C8u, 0x2858B0u, 0x2858B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2858B8u;
label_2858b8:
    // 0x2858b8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2858b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2858bc: 0x2494fce0  addiu       $s4, $a0, -0x320
    ctx->pc = 0x2858bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966496));
    // 0x2858c0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2858c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BFCE4u));
    // 0x2858c4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2858c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BFCECu));
    // 0x2858c8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2858C8u;
    {
        const bool branch_taken_0x2858c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2858CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858C8u;
        // 0x2858cc: 0x8c84fce0  lw          $a0, -0x320($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294966496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858c8) {
            ctx->pc = 0x2858F0u;
            goto label_2858f0;
        }
    }
    ctx->pc = 0x2858D0u;
    // 0x2858d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2858D0u;
    {
        const bool branch_taken_0x2858d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2858D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858D0u;
        // 0x2858d4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858d0) {
            ctx->pc = 0x2858E0u;
            goto label_2858e0;
        }
    }
    ctx->pc = 0x2858D8u;
    // 0x2858d8: 0xc0f8114  jal         func_3E0450
    ctx->pc = 0x2858D8u;
    SET_GPR_U32(ctx, 31, 0x2858E0u);
    ctx->pc = 0x2858DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2858D8u;
    // 0x2858dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0450u, 0x2858D8u, 0x2858E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2858E0u;
label_2858e0:
    // 0x2858e0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2858e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2858e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2858e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2858e8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2858E8u;
    {
        const bool branch_taken_0x2858e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2858ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858E8u;
        // 0x2858ec: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858e8) {
            ctx->pc = 0x285A1Cu;
            goto label_285a1c;
        }
    }
    ctx->pc = 0x2858F0u;
label_2858f0:
    // 0x2858f0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2858f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2858f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2858f8: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x2858f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2858fc: 0x2642023  subu        $a0, $s3, $a0
    ctx->pc = 0x2858fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x285900: 0x8fa8012c  lw          $t0, 0x12C($sp)
    ctx->pc = 0x285900u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x285904: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x285904u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x285908: 0xafa70128  sw          $a3, 0x128($sp)
    ctx->pc = 0x285908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 7));
    // 0x28590c: 0x2c820001  sltiu       $v0, $a0, 0x1
    ctx->pc = 0x28590cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x285910: 0xafa40124  sw          $a0, 0x124($sp)
    ctx->pc = 0x285910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 4));
    // 0x285914: 0x102280a  movz        $a1, $t0, $v0
    ctx->pc = 0x285914u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x285918: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x285918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28591c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x28591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x285920: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x285920u;
    {
        const bool branch_taken_0x285920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285920u;
        // 0x285924: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285920) {
            ctx->pc = 0x28593Cu;
            goto label_28593c;
        }
    }
    ctx->pc = 0x285928u;
    // 0x285928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x285928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28592c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x28592Cu;
    SET_GPR_U32(ctx, 31, 0x285934u);
    ctx->pc = 0x285930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28592Cu;
    // 0x285930: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x28592Cu, 0x285934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285934u;
label_285934:
    // 0x285934: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x285934u;
    {
        const bool branch_taken_0x285934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285934u;
        // 0x285938: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285934) {
            ctx->pc = 0x285948u;
            goto label_285948;
        }
    }
    ctx->pc = 0x28593Cu;
label_28593c:
    // 0x28593c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28593cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285940: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x285940u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285944: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x285944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285948:
    // 0x285948: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x285948u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28594c: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x28594cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285950: 0x12130008  beq         $s0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x285950u;
    {
        const bool branch_taken_0x285950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x285954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285950u;
        // 0x285954: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285950) {
            ctx->pc = 0x285974u;
            goto label_285974;
        }
    }
    ctx->pc = 0x285958u;
label_285958:
    // 0x285958: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x285958u;
    {
        const bool branch_taken_0x285958 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285958u;
        // 0x28595c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285958) {
            ctx->pc = 0x285968u;
            goto label_285968;
        }
    }
    ctx->pc = 0x285960u;
    // 0x285960: 0xc0f8114  jal         func_3E0450
    ctx->pc = 0x285960u;
    SET_GPR_U32(ctx, 31, 0x285968u);
    ctx->pc = 0x285964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285960u;
    // 0x285964: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0450u, 0x285960u, 0x285968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285968u;
label_285968:
    // 0x285968: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x285968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28596c: 0x1613fffa  bne         $s0, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28596Cu;
    {
        const bool branch_taken_0x28596c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x285970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28596Cu;
        // 0x285970: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28596c) {
            ctx->pc = 0x285958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285958;
        }
    }
    ctx->pc = 0x285974u;
label_285974:
    // 0x285974: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x285974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x285978: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x285978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28597c: 0x14490007  bne         $v0, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28597Cu;
    {
        const bool branch_taken_0x28597c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x285980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28597Cu;
        // 0x285980: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28597c) {
            ctx->pc = 0x28599Cu;
            goto label_28599c;
        }
    }
    ctx->pc = 0x285984u;
    // 0x285984: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x285984u;
    {
        const bool branch_taken_0x285984 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x285988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285984u;
        // 0x285988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285984) {
            ctx->pc = 0x285994u;
            goto label_285994;
        }
    }
    ctx->pc = 0x28598Cu;
    // 0x28598c: 0xc0f8114  jal         func_3E0450
    ctx->pc = 0x28598Cu;
    SET_GPR_U32(ctx, 31, 0x285994u);
    ctx->pc = 0x285990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28598Cu;
    // 0x285990: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0450u, 0x28598Cu, 0x285994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285994u;
label_285994:
    // 0x285994: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x285994u;
    {
        const bool branch_taken_0x285994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285994u;
        // 0x285998: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285994) {
            ctx->pc = 0x2859C8u;
            goto label_2859c8;
        }
    }
    ctx->pc = 0x28599Cu;
label_28599c:
    // 0x28599c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28599cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859a0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2859A0u;
    {
        const bool branch_taken_0x2859a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2859A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859A0u;
        // 0x2859a4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859a0) {
            ctx->pc = 0x2859C4u;
            goto label_2859c4;
        }
    }
    ctx->pc = 0x2859A8u;
label_2859a8:
    // 0x2859a8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2859A8u;
    {
        const bool branch_taken_0x2859a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2859ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859A8u;
        // 0x2859ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859a8) {
            ctx->pc = 0x2859B8u;
            goto label_2859b8;
        }
    }
    ctx->pc = 0x2859B0u;
    // 0x2859b0: 0xc0f8114  jal         func_3E0450
    ctx->pc = 0x2859B0u;
    SET_GPR_U32(ctx, 31, 0x2859B8u);
    ctx->pc = 0x2859B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2859B0u;
    // 0x2859b4: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0450u, 0x2859B0u, 0x2859B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2859B8u;
label_2859b8:
    // 0x2859b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2859b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2859bc: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2859BCu;
    {
        const bool branch_taken_0x2859bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2859C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859BCu;
        // 0x2859c0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859bc) {
            ctx->pc = 0x2859A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2859a8;
        }
    }
    ctx->pc = 0x2859C4u;
label_2859c4:
    // 0x2859c4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2859c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2859c8:
    // 0x2859c8: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x2859c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2859cc: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2859ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2859d0: 0x5211000a  beql        $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2859D0u;
    {
        const bool branch_taken_0x2859d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x2859d0) {
            ctx->pc = 0x2859D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2859D0u;
            // 0x2859d4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2859FCu;
            goto label_2859fc;
        }
    }
    ctx->pc = 0x2859D8u;
    // 0x2859d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2859d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2859dc: 0x0  nop
    ctx->pc = 0x2859dcu;
    // NOP
label_2859e0:
    // 0x2859e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2859E0u;
    {
        const bool branch_taken_0x2859e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2859E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859E0u;
        // 0x2859e4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859e0) {
            ctx->pc = 0x2859F0u;
            goto label_2859f0;
        }
    }
    ctx->pc = 0x2859E8u;
    // 0x2859e8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2859E8u;
    SET_GPR_U32(ctx, 31, 0x2859F0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2859E8u, 0x2859F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2859F0u;
label_2859f0:
    // 0x2859f0: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2859F0u;
    {
        const bool branch_taken_0x2859f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2859f0) {
            ctx->pc = 0x2859F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2859F0u;
            // 0x2859f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2859E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2859e0;
        }
    }
    ctx->pc = 0x2859F8u;
    // 0x2859f8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2859f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2859fc:
    // 0x2859fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2859FCu;
    {
        const bool branch_taken_0x2859fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859FCu;
        // 0x285a00: 0x2f51021  addu        $v0, $s7, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859fc) {
            ctx->pc = 0x285A10u;
            goto label_285a10;
        }
    }
    ctx->pc = 0x285A04u;
    // 0x285a04: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x285A04u;
    SET_GPR_U32(ctx, 31, 0x285A0Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x285A04u, 0x285A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A0Cu;
label_285a0c:
    // 0x285a0c: 0x2f51021  addu        $v0, $s7, $s5
    ctx->pc = 0x285a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
label_285a10:
    // 0x285a10: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x285a10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x285a14: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x285a14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x285a18: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x285a18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_285a1c:
    // 0x285a1c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x285a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x285a20: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x285A20u;
    {
        const bool branch_taken_0x285a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A20u;
        // 0x285a24: 0x3c080048  lui         $t0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a20) {
            ctx->pc = 0x285A94u;
            goto label_285a94;
        }
    }
    ctx->pc = 0x285A28u;
    // 0x285a28: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x285A28u;
    SET_GPR_U32(ctx, 31, 0x285A30u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x285A28u, 0x285A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A30u;
label_285a30:
    // 0x285a30: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x285A30u;
    {
        const bool branch_taken_0x285a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A30u;
        // 0x285a34: 0x3c080048  lui         $t0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a30) {
            ctx->pc = 0x285A94u;
            goto label_285a94;
        }
    }
    ctx->pc = 0x285A38u;
label_285a38:
    // 0x285a38: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x285a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a3c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x285A3Cu;
    SET_GPR_U32(ctx, 31, 0x285A44u);
    ctx->pc = 0x285A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285A3Cu;
    // 0x285a40: 0x2445a9e8  addiu       $a1, $v0, -0x5618 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x285A3Cu, 0x285A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A44u;
label_285a44:
    // 0x285a44: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x285A44u;
    {
        const bool branch_taken_0x285a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A44u;
        // 0x285a48: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a44) {
            ctx->pc = 0x285A88u;
            goto label_285a88;
        }
    }
    ctx->pc = 0x285A4Cu;
    // 0x285a4c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x285a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x285a50: 0x2c63018  mult        $a2, $s6, $a2
    ctx->pc = 0x285a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x285a54: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x285a54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x285a58: 0x24e28f20  addiu       $v0, $a3, -0x70E0
    ctx->pc = 0x285a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938400));
    // 0x285a5c: 0x8c642bc8  lw          $a0, 0x2BC8($v1)
    ctx->pc = 0x285a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11208)));
    // 0x285a60: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x285a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x285a64: 0x24a5a598  addiu       $a1, $a1, -0x5A68
    ctx->pc = 0x285a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944152));
    // 0x285a68: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x285a68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x285a6c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x285a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_285a70:
    // 0x285a70: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x285A70u;
    SET_GPR_U32(ctx, 31, 0x285A78u);
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x285A70u, 0x285A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A78u;
label_285a78:
    // 0x285a78: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x285A78u;
    SET_GPR_U32(ctx, 31, 0x285A80u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x285A78u, 0x285A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A80u;
label_285a80:
    // 0x285a80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x285A80u;
    {
        const bool branch_taken_0x285a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A80u;
        // 0x285a84: 0x3c080048  lui         $t0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a80) {
            ctx->pc = 0x285A94u;
            goto label_285a94;
        }
    }
    ctx->pc = 0x285A88u;
label_285a88:
    // 0x285a88: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x285A88u;
    SET_GPR_U32(ctx, 31, 0x285A90u);
    ctx->pc = 0x285A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285A88u;
    // 0x285a8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x285A88u, 0x285A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A90u;
label_285a90:
    // 0x285a90: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x285a90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
label_285a94:
    // 0x285a94: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x285a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x285a98: 0x24a5a598  addiu       $a1, $a1, -0x5A68
    ctx->pc = 0x285a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944152));
    // 0x285a9c: 0x8d042bc8  lw          $a0, 0x2BC8($t0)
    ctx->pc = 0x285a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11208)));
    // 0x285aa0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x285AA0u;
    SET_GPR_U32(ctx, 31, 0x285AA8u);
    ctx->pc = 0x285AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AA0u;
    // 0x285aa4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x285AA0u, 0x285AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AA8u;
label_285aa8:
    // 0x285aa8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x285AA8u;
    SET_GPR_U32(ctx, 31, 0x285AB0u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x285AA8u, 0x285AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AB0u;
label_285ab0:
    // 0x285ab0: 0x3c090047  lui         $t1, 0x47
    ctx->pc = 0x285ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)71 << 16));
    // 0x285ab4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x285ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ab8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x285AB8u;
    SET_GPR_U32(ctx, 31, 0x285AC0u);
    ctx->pc = 0x285ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AB8u;
    // 0x285abc: 0x2525a5a0  addiu       $a1, $t1, -0x5A60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294944160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x285AB8u, 0x285AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AC0u;
label_285ac0:
    // 0x285ac0: 0x1440ff5f  bnez        $v0, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x285AC0u;
    {
        const bool branch_taken_0x285ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AC0u;
        // 0x285ac4: 0x3c070047  lui         $a3, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ac0) {
            ctx->pc = 0x285840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285840;
        }
    }
    ctx->pc = 0x285AC8u;
    // 0x285ac8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x285ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x285acc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x285accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x285ad0: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x285ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x285ad4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x285ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x285ad8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x285ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x285adc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285ADCu;
    {
        const bool branch_taken_0x285adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285ADCu;
        // 0x285ae0: 0xac9690d8  sw          $s6, -0x6F28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294938840), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285adc) {
            ctx->pc = 0x285AECu;
            goto label_285aec;
        }
    }
    ctx->pc = 0x285AE4u;
    // 0x285ae4: 0xc0a1440  jal         func_285100
    ctx->pc = 0x285AE4u;
    SET_GPR_U32(ctx, 31, 0x285AECu);
    ctx->pc = 0x285100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285100u, 0x285AE4u, 0x285AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AECu;
label_285aec:
    // 0x285aec: 0xc0a1484  jal         func_285210
    ctx->pc = 0x285AECu;
    SET_GPR_U32(ctx, 31, 0x285AF4u);
    ctx->pc = 0x285AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AECu;
    // 0x285af0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285210u, 0x285AECu, 0x285AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AF4u;
label_285af4:
    // 0x285af4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x285af4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x285af8: 0x8ce290d8  lw          $v0, -0x6F28($a3)
    ctx->pc = 0x285af8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F90D8u));
    // 0x285afc: 0x1840005d  blez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x285AFCu;
    {
        const bool branch_taken_0x285afc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x285B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AFCu;
        // 0x285b00: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285afc) {
            ctx->pc = 0x285C74u;
            goto label_285c74;
        }
    }
    ctx->pc = 0x285B04u;
    // 0x285b04: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x285b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x285b08: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x285b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x285b0c: 0x24549920  addiu       $s4, $v0, -0x66E0
    ctx->pc = 0x285b0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940960));
    // 0x285b10: 0x24778f20  addiu       $s7, $v1, -0x70E0
    ctx->pc = 0x285b10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938400));
    // 0x285b14: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x285b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x285b18: 0x280f02d  daddu       $fp, $s4, $zero
    ctx->pc = 0x285b18u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b1c: 0x2453fd28  addiu       $s3, $v0, -0x2D8
    ctx->pc = 0x285b1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966568));
    // 0x285b20: 0x24150014  addiu       $s5, $zero, 0x14
    ctx->pc = 0x285b20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x285b24: 0x0  nop
    ctx->pc = 0x285b24u;
    // NOP
label_285b28:
    // 0x285b28: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x285b28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x285b2c: 0x8d029e40  lw          $v0, -0x61C0($t0)
    ctx->pc = 0x285b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x285b30: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x285b30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x285b34: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x285B34u;
    {
        const bool branch_taken_0x285b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B34u;
        // 0x285b38: 0x2d58018  mult        $s0, $s6, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b34) {
            ctx->pc = 0x285BC4u;
            goto label_285bc4;
        }
    }
    ctx->pc = 0x285B3Cu;
    // 0x285b3c: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x285b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x285b40: 0x2178821  addu        $s1, $s0, $s7
    ctx->pc = 0x285b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x285b44: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x285B44u;
    SET_GPR_U32(ctx, 31, 0x285B4Cu);
    ctx->pc = 0x285B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285B44u;
    // 0x285b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x285B44u, 0x285B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B4Cu;
label_285b4c:
    // 0x285b4c: 0x28430006  slti        $v1, $v0, 0x6
    ctx->pc = 0x285b4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x285b50: 0x2142021  addu        $a0, $s0, $s4
    ctx->pc = 0x285b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x285b54: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x285b54u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x285b58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x285b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b5c: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x285B5Cu;
    SET_GPR_U32(ctx, 31, 0x285B64u);
    ctx->pc = 0x285B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285B5Cu;
    // 0x285b60: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x285B5Cu, 0x285B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B64u;
label_285b64:
    // 0x285b64: 0x1a400012  blez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x285B64u;
    {
        const bool branch_taken_0x285b64 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x285B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B64u;
        // 0x285b68: 0x26c80001  addiu       $t0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b64) {
            ctx->pc = 0x285BB0u;
            goto label_285bb0;
        }
    }
    ctx->pc = 0x285B6Cu;
    // 0x285b6c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x285b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x285b70: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x285b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x285b74: 0x2c22018  mult        $a0, $s6, $v0
    ctx->pc = 0x285b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x285b78: 0x24690c11  addiu       $t1, $v1, 0xC11
    ctx->pc = 0x285b78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 3089));
    // 0x285b7c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x285b7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b80: 0x9e3021  addu        $a2, $a0, $fp
    ctx->pc = 0x285b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x285b84: 0x0  nop
    ctx->pc = 0x285b84u;
    // NOP
label_285b88:
    // 0x285b88: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x285b88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x285b8c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x285b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x285b90: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x285b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x285b94: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x285b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x285b98: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x285b98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x285b9c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x285b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x285ba0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x285ba0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x285ba4: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x285ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x285ba8: 0x14e0fff7  bnez        $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x285BA8u;
    {
        const bool branch_taken_0x285ba8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x285BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BA8u;
        // 0x285bac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ba8) {
            ctx->pc = 0x285B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285b88;
        }
    }
    ctx->pc = 0x285BB0u;
label_285bb0:
    // 0x285bb0: 0x2d51818  mult        $v1, $s6, $s5
    ctx->pc = 0x285bb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x285bb4: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x285bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x285bb8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x285bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x285bbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x285BBCu;
    {
        const bool branch_taken_0x285bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285BBCu;
        // 0x285bc0: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285bbc) {
            ctx->pc = 0x285BD8u;
            goto label_285bd8;
        }
    }
    ctx->pc = 0x285BC4u;
label_285bc4:
    // 0x285bc4: 0x2d52018  mult        $a0, $s6, $s5
    ctx->pc = 0x285bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x285bc8: 0x972821  addu        $a1, $a0, $s7
    ctx->pc = 0x285bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x285bcc: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x285BCCu;
    SET_GPR_U32(ctx, 31, 0x285BD4u);
    ctx->pc = 0x285BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285BCCu;
    // 0x285bd0: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x285BCCu, 0x285BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BD4u;
label_285bd4:
    // 0x285bd4: 0x26c80001  addiu       $t0, $s6, 0x1
    ctx->pc = 0x285bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_285bd8:
    // 0x285bd8: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x285bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x285bdc: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x285bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x285be0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285be4: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x285be4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x285be8: 0x3c01430f  lui         $at, 0x430F
    ctx->pc = 0x285be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17167 << 16));
    // 0x285bec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x285becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285bf0: 0x3c0143e5  lui         $at, 0x43E5
    ctx->pc = 0x285bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17381 << 16));
    // 0x285bf4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x285bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x285bf8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x285bf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285bfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x285bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x285c00: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x285c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x285c04: 0x3c01425c  lui         $at, 0x425C
    ctx->pc = 0x285c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16988 << 16));
    // 0x285c08: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x285c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x285c0c: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x285c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x285c10: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x285c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x285c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x285c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c18: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x285c18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x285c1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x285c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c20: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x285c20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x285c24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x285c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c28: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x285c28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x285c2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x285c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c30: 0x3c0142d0  lui         $at, 0x42D0
    ctx->pc = 0x285c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17104 << 16));
    // 0x285c34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x285c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x285c38: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x285c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x285c3c: 0xe4840014  swc1        $f4, 0x14($a0)
    ctx->pc = 0x285c3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x285c40: 0x3c0143e4  lui         $at, 0x43E4
    ctx->pc = 0x285c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17380 << 16));
    // 0x285c44: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x285c44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x285c48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x285c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285c4c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x285c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x285c50: 0xe4a20018  swc1        $f2, 0x18($a1)
    ctx->pc = 0x285c50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x285c54: 0xe4c1001c  swc1        $f1, 0x1C($a2)
    ctx->pc = 0x285c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x285c58: 0x3c0143cc  lui         $at, 0x43CC
    ctx->pc = 0x285c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17356 << 16));
    // 0x285c5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285c60: 0x8c8290d8  lw          $v0, -0x6F28($a0)
    ctx->pc = 0x285c60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F90D8u));
    // 0x285c64: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x285c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x285c68: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x285c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x285c6c: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x285C6Cu;
    {
        const bool branch_taken_0x285c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C6Cu;
        // 0x285c70: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c6c) {
            ctx->pc = 0x285B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285b28;
        }
    }
    ctx->pc = 0x285C74u;
label_285c74:
    // 0x285c74: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x285c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x285c78: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x285c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x285c7c: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x285c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x285c80: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x285c80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x285c84: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x285c84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x285c88: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x285c88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x285c8c: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x285c8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x285c90: 0xdfb70178  ld          $s7, 0x178($sp)
    ctx->pc = 0x285c90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x285c94: 0xdfbe0180  ld          $fp, 0x180($sp)
    ctx->pc = 0x285c94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x285c98: 0xdfbf0188  ld          $ra, 0x188($sp)
    ctx->pc = 0x285c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x285c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x285C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C9Cu;
        // 0x285ca0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285CA4u;
    // 0x285ca4: 0x0  nop
    ctx->pc = 0x285ca4u;
    // NOP
    ctx->pc = 0x285ca8u;
}
