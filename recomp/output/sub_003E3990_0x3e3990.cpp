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

// Function: sub_003E3990
// Address: 0x3e3990 - 0x3e3b78
void sub_003E3990_0x3e3990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3990_0x3e3990");
#endif

    switch (ctx->pc) {
        case 0x3e39c0u: goto label_3e39c0;
        case 0x3e39dcu: goto label_3e39dc;
        case 0x3e39f0u: goto label_3e39f0;
        case 0x3e39fcu: goto label_3e39fc;
        case 0x3e3a68u: goto label_3e3a68;
        case 0x3e3a84u: goto label_3e3a84;
        case 0x3e3a90u: goto label_3e3a90;
        case 0x3e3aa8u: goto label_3e3aa8;
        case 0x3e3b30u: goto label_3e3b30;
        case 0x3e3b4cu: goto label_3e3b4c;
        case 0x3e3b54u: goto label_3e3b54;
        default: break;
    }

    ctx->pc = 0x3e3990u;

    // 0x3e3990: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3e3990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3e3994: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x3e3994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x3e3998: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x3e3998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x3e399c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3e399cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e39a0: 0x30b3ffff  andi        $s3, $a1, 0xFFFF
    ctx->pc = 0x3e39a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3e39a4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x3e39a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x3e39a8: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x3e39a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x3e39ac: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x3e39acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x3e39b0: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x3e39b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x3e39b4: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x3e39b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x3e39b8: 0xc0f8dae  jal         func_3E36B8
    ctx->pc = 0x3E39B8u;
    SET_GPR_U32(ctx, 31, 0x3E39C0u);
    ctx->pc = 0x3E39BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E39B8u;
    // 0x3e39bc: 0x2671ffff  addiu       $s1, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E36B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E36B8u, 0x3E39B8u, 0x3E39C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E39C0u;
label_3e39c0:
    // 0x3e39c0: 0x26a20008  addiu       $v0, $s5, 0x8
    ctx->pc = 0x3e39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x3e39c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e39c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e39c8: 0xa4530004  sh          $s3, 0x4($v0)
    ctx->pc = 0x3e39c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 19));
    // 0x3e39cc: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x3e39ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x3e39d0: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x3e39d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x3e39d4: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E39D4u;
    SET_GPR_U32(ctx, 31, 0x3E39DCu);
    ctx->pc = 0x3E39D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E39D4u;
    // 0x3e39d8: 0xaea30008  sw          $v1, 0x8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E39D4u, 0x3E39DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E39DCu;
label_3e39dc:
    // 0x3e39dc: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x3e39dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e39e0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x3e39e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x3e39e4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E39E4u;
    {
        const bool branch_taken_0x3e39e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E39E4u;
        // 0x3e39e8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e39e4) {
            ctx->pc = 0x3E3A08u;
            goto label_3e3a08;
        }
    }
    ctx->pc = 0x3E39ECu;
    // 0x3e39ec: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3e39ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e39f0:
    // 0x3e39f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e39f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e39f4: 0xc0ab3e8  jal         func_2ACFA0
    ctx->pc = 0x3E39F4u;
    SET_GPR_U32(ctx, 31, 0x3E39FCu);
    ctx->pc = 0x3E39F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E39F4u;
    // 0x3e39f8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA0u, 0x3E39F4u, 0x3E39FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E39FCu;
label_3e39fc:
    // 0x3e39fc: 0x0  nop
    ctx->pc = 0x3e39fcu;
    // NOP
    // 0x3e3a00: 0x1634fffb  bne         $s1, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E3A00u;
    {
        const bool branch_taken_0x3e3a00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x3E3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A00u;
        // 0x3e3a04: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3a00) {
            ctx->pc = 0x3E39F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e39f0;
        }
    }
    ctx->pc = 0x3E3A08u;
label_3e3a08:
    // 0x3e3a08: 0x1640001e  bnez        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E3A08u;
    {
        const bool branch_taken_0x3e3a08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A08u;
        // 0x3e3a0c: 0xaeb20000  sw          $s2, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3a08) {
            ctx->pc = 0x3E3A84u;
            goto label_3e3a84;
        }
    }
    ctx->pc = 0x3E3A10u;
    // 0x3e3a10: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x3e3a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x3e3a14: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3e3a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3e3a18: 0x2462dbd8  addiu       $v0, $v1, -0x2428
    ctx->pc = 0x3e3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958040));
    // 0x3e3a1c: 0xdc6bdbd8  ld          $t3, -0x2428($v1)
    ctx->pc = 0x3e3a1cu;
    SET_GPR_U64(ctx, 11, FAST_READ64(0x46DBD8u));
    // 0x3e3a20: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x3e3a20u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x46DBF0u));
    // 0x3e3a24: 0x24a5dba8  addiu       $a1, $a1, -0x2458
    ctx->pc = 0x3e3a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957992));
    // 0x3e3a28: 0xdc470020  ld          $a3, 0x20($v0)
    ctx->pc = 0x3e3a28u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x46DBF8u));
    // 0x3e3a2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e3a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3a30: 0x904c0038  lbu         $t4, 0x38($v0)
    ctx->pc = 0x3e3a30u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)FAST_READ8(0x46DC10u));
    // 0x3e3a34: 0xdc4a0008  ld          $t2, 0x8($v0)
    ctx->pc = 0x3e3a34u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x46DBE0u));
    // 0x3e3a38: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x3e3a38u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x46DBE8u));
    // 0x3e3a3c: 0xdc480028  ld          $t0, 0x28($v0)
    ctx->pc = 0x3e3a3cu;
    SET_GPR_U64(ctx, 8, FAST_READ64(0x46DC00u));
    // 0x3e3a40: 0xdc490030  ld          $t1, 0x30($v0)
    ctx->pc = 0x3e3a40u;
    SET_GPR_U64(ctx, 9, FAST_READ64(0x46DC08u));
    // 0x3e3a44: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x3e3a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x3e3a48: 0xffa70020  sd          $a3, 0x20($sp)
    ctx->pc = 0x3e3a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 7));
    // 0x3e3a4c: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x3e3a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x3e3a50: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x3e3a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
    // 0x3e3a54: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x3e3a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x3e3a58: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x3e3a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x3e3a5c: 0xffa90030  sd          $t1, 0x30($sp)
    ctx->pc = 0x3e3a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    // 0x3e3a60: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x3E3A60u;
    SET_GPR_U32(ctx, 31, 0x3E3A68u);
    ctx->pc = 0x3E3A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3A60u;
    // 0x3e3a64: 0xa3ac0038  sb          $t4, 0x38($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x3E3A60u, 0x3E3A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3A68u;
label_3e3a68:
    // 0x3e3a68: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x3e3a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x3e3a6c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3e3a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3e3a70: 0x24842440  addiu       $a0, $a0, 0x2440
    ctx->pc = 0x3e3a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9280));
    // 0x3e3a74: 0x24a5dbb0  addiu       $a1, $a1, -0x2450
    ctx->pc = 0x3e3a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958000));
    // 0x3e3a78: 0x2406013e  addiu       $a2, $zero, 0x13E
    ctx->pc = 0x3e3a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x3e3a7c: 0xc0ab402  jal         func_2AD008
    ctx->pc = 0x3E3A7Cu;
    SET_GPR_U32(ctx, 31, 0x3E3A84u);
    ctx->pc = 0x3E3A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3A7Cu;
    // 0x3e3a80: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD008u, 0x3E3A7Cu, 0x3E3A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3A84u;
label_3e3a84:
    // 0x3e3a84: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x3e3a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3e3a88: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E3A88u;
    SET_GPR_U32(ctx, 31, 0x3E3A90u);
    ctx->pc = 0x3E3A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3A88u;
    // 0x3e3a8c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E3A88u, 0x3E3A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3A90u;
label_3e3a90:
    // 0x3e3a90: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3e3a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e3a94: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x3e3a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x3e3a98: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x3e3a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3e3a9c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E3A9Cu;
    {
        const bool branch_taken_0x3e3a9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A9Cu;
        // 0x3e3aa0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3a9c) {
            ctx->pc = 0x3E3AC0u;
            goto label_3e3ac0;
        }
    }
    ctx->pc = 0x3E3AA4u;
    // 0x3e3aa4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3e3aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e3aa8:
    // 0x3e3aa8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3e3aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3e3aac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e3aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e3ab0: 0x0  nop
    ctx->pc = 0x3e3ab0u;
    // NOP
    // 0x3e3ab4: 0x0  nop
    ctx->pc = 0x3e3ab4u;
    // NOP
    // 0x3e3ab8: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E3AB8u;
    {
        const bool branch_taken_0x3e3ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3E3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AB8u;
        // 0x3e3abc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3ab8) {
            ctx->pc = 0x3E3AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3aa8;
        }
    }
    ctx->pc = 0x3E3AC0u;
label_3e3ac0:
    // 0x3e3ac0: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3E3AC0u;
    {
        const bool branch_taken_0x3e3ac0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AC0u;
        // 0x3e3ac4: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3ac0) {
            ctx->pc = 0x3E3B4Cu;
            goto label_3e3b4c;
        }
    }
    ctx->pc = 0x3E3AC8u;
    // 0x3e3ac8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x3e3ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x3e3acc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3e3accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3e3ad0: 0x2462dc18  addiu       $v0, $v1, -0x23E8
    ctx->pc = 0x3e3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958104));
    // 0x3e3ad4: 0xdc6ddc18  ld          $t5, -0x23E8($v1)
    ctx->pc = 0x3e3ad4u;
    SET_GPR_U64(ctx, 13, FAST_READ64(0x46DC18u));
    // 0x3e3ad8: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x3e3ad8u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x46DC30u));
    // 0x3e3adc: 0x24a5dba8  addiu       $a1, $a1, -0x2458
    ctx->pc = 0x3e3adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957992));
    // 0x3e3ae0: 0xdc470020  ld          $a3, 0x20($v0)
    ctx->pc = 0x3e3ae0u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x46DC38u));
    // 0x3e3ae4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e3ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3ae8: 0x904e003e  lbu         $t6, 0x3E($v0)
    ctx->pc = 0x3e3ae8u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)FAST_READ8(0x46DC56u));
    // 0x3e3aec: 0xdc4c0008  ld          $t4, 0x8($v0)
    ctx->pc = 0x3e3aecu;
    SET_GPR_U64(ctx, 12, FAST_READ64(0x46DC20u));
    // 0x3e3af0: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x3e3af0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x46DC28u));
    // 0x3e3af4: 0xdc480028  ld          $t0, 0x28($v0)
    ctx->pc = 0x3e3af4u;
    SET_GPR_U64(ctx, 8, FAST_READ64(0x46DC40u));
    // 0x3e3af8: 0xdc490030  ld          $t1, 0x30($v0)
    ctx->pc = 0x3e3af8u;
    SET_GPR_U64(ctx, 9, FAST_READ64(0x46DC48u));
    // 0x3e3afc: 0x8c4a0038  lw          $t2, 0x38($v0)
    ctx->pc = 0x3e3afcu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x46DC50u));
    // 0x3e3b00: 0x944b003c  lhu         $t3, 0x3C($v0)
    ctx->pc = 0x3e3b00u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)FAST_READ16(0x46DC54u));
    // 0x3e3b04: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x3e3b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x3e3b08: 0xffa70020  sd          $a3, 0x20($sp)
    ctx->pc = 0x3e3b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 7));
    // 0x3e3b0c: 0xffad0000  sd          $t5, 0x0($sp)
    ctx->pc = 0x3e3b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 13));
    // 0x3e3b10: 0xffac0008  sd          $t4, 0x8($sp)
    ctx->pc = 0x3e3b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 12));
    // 0x3e3b14: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x3e3b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x3e3b18: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x3e3b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x3e3b1c: 0xffa90030  sd          $t1, 0x30($sp)
    ctx->pc = 0x3e3b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    // 0x3e3b20: 0xafaa0038  sw          $t2, 0x38($sp)
    ctx->pc = 0x3e3b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 10));
    // 0x3e3b24: 0xa7ab003c  sh          $t3, 0x3C($sp)
    ctx->pc = 0x3e3b24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 60), (uint16_t)GPR_U32(ctx, 11));
    // 0x3e3b28: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x3E3B28u;
    SET_GPR_U32(ctx, 31, 0x3E3B30u);
    ctx->pc = 0x3E3B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3B28u;
    // 0x3e3b2c: 0xa3ae003e  sb          $t6, 0x3E($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 62), (uint8_t)GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x3E3B28u, 0x3E3B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B30u;
label_3e3b30:
    // 0x3e3b30: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x3e3b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x3e3b34: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3e3b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3e3b38: 0x24842440  addiu       $a0, $a0, 0x2440
    ctx->pc = 0x3e3b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9280));
    // 0x3e3b3c: 0x24a5dbb0  addiu       $a1, $a1, -0x2450
    ctx->pc = 0x3e3b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958000));
    // 0x3e3b40: 0x24060151  addiu       $a2, $zero, 0x151
    ctx->pc = 0x3e3b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 337));
    // 0x3e3b44: 0xc0ab402  jal         func_2AD008
    ctx->pc = 0x3E3B44u;
    SET_GPR_U32(ctx, 31, 0x3E3B4Cu);
    ctx->pc = 0x3E3B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3B44u;
    // 0x3e3b48: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD008u, 0x3E3B44u, 0x3E3B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B4Cu;
label_3e3b4c:
    // 0x3e3b4c: 0xc0f8e56  jal         func_3E3958
    ctx->pc = 0x3E3B4Cu;
    SET_GPR_U32(ctx, 31, 0x3E3B54u);
    ctx->pc = 0x3E3B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3B4Cu;
    // 0x3e3b50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3958u, 0x3E3B4Cu, 0x3E3B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B54u;
label_3e3b54:
    // 0x3e3b54: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x3e3b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3e3b58: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x3e3b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3e3b5c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x3e3b5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3e3b60: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x3e3b60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3e3b64: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x3e3b64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3e3b68: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x3e3b68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3e3b6c: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x3e3b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3e3b70: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B70u;
        // 0x3e3b74: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3B78u;
}
