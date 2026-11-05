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

// Function: sub_0025C440
// Address: 0x25c440 - 0x25c690
void sub_0025C440_0x25c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C440_0x25c440");
#endif

    switch (ctx->pc) {
        case 0x25c498u: goto label_25c498;
        case 0x25c4a8u: goto label_25c4a8;
        case 0x25c500u: goto label_25c500;
        case 0x25c50cu: goto label_25c50c;
        case 0x25c538u: goto label_25c538;
        case 0x25c5e8u: goto label_25c5e8;
        case 0x25c5fcu: goto label_25c5fc;
        case 0x25c618u: goto label_25c618;
        case 0x25c64cu: goto label_25c64c;
        default: break;
    }

    ctx->pc = 0x25c440u;

    // 0x25c440: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x25c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x25c444: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x25c444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x25c448: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x25c448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x25c44c: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x25c44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x25c450: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25c450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c454: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x25c454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x25c458: 0x24523d90  addiu       $s2, $v0, 0x3D90
    ctx->pc = 0x25c458u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 15760));
    // 0x25c45c: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x25c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x25c460: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25c460u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c464: 0x8c433d90  lw          $v1, 0x3D90($v0)
    ctx->pc = 0x25c464u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B3D90u));
    // 0x25c468: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x25c468u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c46c: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x25c46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x25c470: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x25c470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x25c474: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x25c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x25c478: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x25c478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x25c47c: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x25C47Cu;
    {
        const bool branch_taken_0x25c47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C47Cu;
        // 0x25c480: 0xffbf0150  sd          $ra, 0x150($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c47c) {
            ctx->pc = 0x25C660u;
            goto label_25c660;
        }
    }
    ctx->pc = 0x25C484u;
    // 0x25c484: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x25c484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c488: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x25c488u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x25c48c: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x25c48cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x25c490: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x25c490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x25c494: 0x0  nop
    ctx->pc = 0x25c494u;
    // NOP
label_25c498:
    // 0x25c498: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x25c498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25c49c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x25c49cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25c4a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25C4A0u;
    {
        const bool branch_taken_0x25c4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C4A0u;
        // 0x25c4a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4a0) {
            ctx->pc = 0x25C4C0u;
            goto label_25c4c0;
        }
    }
    ctx->pc = 0x25C4A8u;
label_25c4a8:
    // 0x25c4a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x25c4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25c4ac: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x25c4acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25c4b0: 0x0  nop
    ctx->pc = 0x25c4b0u;
    // NOP
    // 0x25c4b4: 0x0  nop
    ctx->pc = 0x25c4b4u;
    // NOP
    // 0x25c4b8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x25C4B8u;
    {
        const bool branch_taken_0x25c4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C4B8u;
        // 0x25c4bc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4b8) {
            ctx->pc = 0x25C4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c4a8;
        }
    }
    ctx->pc = 0x25C4C0u;
label_25c4c0:
    // 0x25c4c0: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x25c4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25c4c4: 0x30c20003  andi        $v0, $a2, 0x3
    ctx->pc = 0x25c4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x25c4c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25C4C8u;
    {
        const bool branch_taken_0x25c4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C4C8u;
        // 0x25c4cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4c8) {
            ctx->pc = 0x25C4F0u;
            goto label_25c4f0;
        }
    }
    ctx->pc = 0x25C4D0u;
    // 0x25c4d0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x25c4d4: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x25c4d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x25c4d8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x25c4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x25c4dc: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x25c4dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x25c4e0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x25c4e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x25c4e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25c4e8: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x25c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x25c4ec: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x25c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25c4f0:
    // 0x25c4f0: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x25c4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25c4f4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x25c4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x25c4f8: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x25C4F8u;
    SET_GPR_U32(ctx, 31, 0x25C500u);
    ctx->pc = 0x25C4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C4F8u;
    // 0x25c4fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x25C4F8u, 0x25C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C500u;
label_25c500:
    // 0x25c500: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25c500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c504: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x25C504u;
    SET_GPR_U32(ctx, 31, 0x25C50Cu);
    ctx->pc = 0x25C508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C504u;
    // 0x25c508: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x25C504u, 0x25C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C50Cu;
label_25c50c:
    // 0x25c50c: 0x54400051  bnel        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x25C50Cu;
    {
        const bool branch_taken_0x25c50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c50c) {
            ctx->pc = 0x25C510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C50Cu;
            // 0x25c510: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C654u;
            goto label_25c654;
        }
    }
    ctx->pc = 0x25C514u;
    // 0x25c514: 0x8e70961c  lw          $s0, -0x69E4($s3)
    ctx->pc = 0x25c514u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294940188)));
    // 0x25c518: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25c518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c51c: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x25c51cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25c520: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x25c520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25c524: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x25c524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25c528: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x25c528u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x25c52c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x25c52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25c530: 0xc086824  jal         func_21A090
    ctx->pc = 0x25C530u;
    SET_GPR_U32(ctx, 31, 0x25C538u);
    ctx->pc = 0x25C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C530u;
    // 0x25c534: 0xae62961c  sw          $v0, -0x69E4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294940188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A090u, 0x25C530u, 0x25C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C538u;
label_25c538:
    // 0x25c538: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x25c538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25c53c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x25c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x25c540: 0x8c6495a8  lw          $a0, -0x6A58($v1)
    ctx->pc = 0x25c540u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F95A8u));
    // 0x25c544: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x25c544u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c548: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25c548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25c54c: 0xae70961c  sw          $s0, -0x69E4($s3)
    ctx->pc = 0x25c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294940188), GPR_U32(ctx, 16));
    // 0x25c550: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25c550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25c554: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25c554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x25c558: 0xac450190  sw          $a1, 0x190($v0)
    ctx->pc = 0x25c558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 5));
    // 0x25c55c: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x25c55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x25c560: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25c560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25c564: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x25c564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x25c568: 0xaed40008  sw          $s4, 0x8($s6)
    ctx->pc = 0x25c568u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 20));
    // 0x25c56c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25c570: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x25c570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x25c574: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25c574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25c578: 0xa3a0010c  sb          $zero, 0x10C($sp)
    ctx->pc = 0x25c578u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 268), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c57c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x25c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x25c580: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25c580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x25c584: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25c584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25c588: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25c588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c58c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x25c590: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x25c590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x25c594: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25c598: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x25c598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25c59c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x25c59cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x25c5a0: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x25c5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x25c5a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x25c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25c5a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x25c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25c5ac: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x25c5acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x25c5b0: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x25c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x25c5b4: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x25c5b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25c5b8: 0x9064000c  lbu         $a0, 0xC($v1)
    ctx->pc = 0x25c5b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25c5bc: 0xa062000c  sb          $v0, 0xC($v1)
    ctx->pc = 0x25c5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x25c5c0: 0xa224000c  sb          $a0, 0xC($s1)
    ctx->pc = 0x25c5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x25c5c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25c5c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x25c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25c5cc: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x25c5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25c5d0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x25c5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x25c5d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c5d8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C5D8u;
    {
        const bool branch_taken_0x25c5d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c5d8) {
            ctx->pc = 0x25C5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C5D8u;
            // 0x25c5dc: 0x8fa40104  lw          $a0, 0x104($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C5ECu;
            goto label_25c5ec;
        }
    }
    ctx->pc = 0x25C5E0u;
    // 0x25c5e0: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x25C5E0u;
    SET_GPR_U32(ctx, 31, 0x25C5E8u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x25C5E0u, 0x25C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C5E8u;
label_25c5e8:
    // 0x25c5e8: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x25c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_25c5ec:
    // 0x25c5ec: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x25C5ECu;
    {
        const bool branch_taken_0x25c5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c5ec) {
            ctx->pc = 0x25C5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C5ECu;
            // 0x25c5f0: 0xae140008  sw          $s4, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C62Cu;
            goto label_25c62c;
        }
    }
    ctx->pc = 0x25C5F4u;
    // 0x25c5f4: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x25C5F4u;
    SET_GPR_U32(ctx, 31, 0x25C5FCu);
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x25C5F4u, 0x25C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C5FCu;
label_25c5fc:
    // 0x25c5fc: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x25c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x25c600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25c600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c604: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x25c604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25c608: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x25c608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c60c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x25c60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x25c610: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x25C610u;
    SET_GPR_U32(ctx, 31, 0x25C618u);
    ctx->pc = 0x25C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C610u;
    // 0x25c614: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x25C610u, 0x25C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C618u;
label_25c618:
    // 0x25c618: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x25c618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25c61c: 0x93a2010c  lbu         $v0, 0x10C($sp)
    ctx->pc = 0x25c61cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x25c620: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x25c620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x25c624: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25C624u;
    {
        const bool branch_taken_0x25c624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C624u;
        // 0x25c628: 0xa202000c  sb          $v0, 0xC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c624) {
            ctx->pc = 0x25C638u;
            goto label_25c638;
        }
    }
    ctx->pc = 0x25C62Cu;
label_25c62c:
    // 0x25c62c: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x25c62cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c630: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x25c630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x25c634: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x25c634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_25c638:
    // 0x25c638: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x25c638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25c63c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25C63Cu;
    {
        const bool branch_taken_0x25c63c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C63Cu;
        // 0x25c640: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c63c) {
            ctx->pc = 0x25C664u;
            goto label_25c664;
        }
    }
    ctx->pc = 0x25C644u;
    // 0x25c644: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x25C644u;
    SET_GPR_U32(ctx, 31, 0x25C64Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x25C644u, 0x25C64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C64Cu;
label_25c64c:
    // 0x25c64c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25C64Cu;
    {
        const bool branch_taken_0x25c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C64Cu;
        // 0x25c650: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c64c) {
            ctx->pc = 0x25C664u;
            goto label_25c664;
        }
    }
    ctx->pc = 0x25C654u;
label_25c654:
    // 0x25c654: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25c654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25c658: 0x1602ff8f  bne         $s0, $v0, . + 4 + (-0x71 << 2)
    ctx->pc = 0x25C658u;
    {
        const bool branch_taken_0x25c658 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x25C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C658u;
        // 0x25c65c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c658) {
            ctx->pc = 0x25C498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c498;
        }
    }
    ctx->pc = 0x25C660u;
label_25c660:
    // 0x25c660: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x25c660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25c664:
    // 0x25c664: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x25c664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x25c668: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x25c668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x25c66c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x25c66cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25c670: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x25c670u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x25c674: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x25c674u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x25c678: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x25c678u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c67c: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x25c67cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x25c680: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x25c680u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x25c684: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x25c684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x25c688: 0x3e00008  jr          $ra
    ctx->pc = 0x25C688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C688u;
        // 0x25c68c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C690u;
}
