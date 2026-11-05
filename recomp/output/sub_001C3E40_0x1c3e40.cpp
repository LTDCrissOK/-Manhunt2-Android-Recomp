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

// Function: sub_001C3E40
// Address: 0x1c3e40 - 0x1c3fb8
void sub_001C3E40_0x1c3e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3E40_0x1c3e40");
#endif

    switch (ctx->pc) {
        case 0x1c3e78u: goto label_1c3e78;
        case 0x1c3e80u: goto label_1c3e80;
        case 0x1c3eacu: goto label_1c3eac;
        case 0x1c3ee0u: goto label_1c3ee0;
        default: break;
    }

    ctx->pc = 0x1c3e40u;

    // 0x1c3e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c3e44: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1c3e48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c3e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c3e4c: 0x24421468  addiu       $v0, $v0, 0x1468
    ctx->pc = 0x1c3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5224));
    // 0x1c3e50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c3e50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3e58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c3e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c3e5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c3e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c3e60: 0x26710488  addiu       $s1, $s3, 0x488
    ctx->pc = 0x1c3e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1160));
    // 0x1c3e64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c3e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c3e68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c3e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e6c: 0xae6204c8  sw          $v0, 0x4C8($s3)
    ctx->pc = 0x1c3e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1224), GPR_U32(ctx, 2));
    // 0x1c3e70: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C3E70u;
    SET_GPR_U32(ctx, 31, 0x1C3E78u);
    ctx->pc = 0x1C3E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E70u;
    // 0x1c3e74: 0x267004a0  addiu       $s0, $s3, 0x4A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C3E70u, 0x1C3E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E78u;
label_1c3e78:
    // 0x1c3e78: 0xc06e11a  jal         func_1B8468
    ctx->pc = 0x1C3E78u;
    SET_GPR_U32(ctx, 31, 0x1C3E80u);
    ctx->pc = 0x1C3E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E78u;
    // 0x1c3e7c: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8468u, 0x1C3E78u, 0x1C3E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E80u;
label_1c3e80:
    // 0x1c3e80: 0xae600478  sw          $zero, 0x478($s3)
    ctx->pc = 0x1c3e80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1144), GPR_U32(ctx, 0));
    // 0x1c3e84: 0x26620478  addiu       $v0, $s3, 0x478
    ctx->pc = 0x1c3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1144));
    // 0x1c3e88: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1c3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1c3e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e90: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1c3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1c3e94: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1c3e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1c3e98: 0xae600488  sw          $zero, 0x488($s3)
    ctx->pc = 0x1c3e98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1160), GPR_U32(ctx, 0));
    // 0x1c3e9c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1c3ea0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1c3ea4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C3EA4u;
    SET_GPR_U32(ctx, 31, 0x1C3EACu);
    ctx->pc = 0x1C3EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3EA4u;
    // 0x1c3ea8: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C3EA4u, 0x1C3EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3EACu;
label_1c3eac:
    // 0x1c3eac: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1c3eb0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1c3eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c3eb4: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1c3eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1c3eb8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1c3eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1c3ebc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1c3ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1c3ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ec4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c3ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c3ec8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c3ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ecc: 0xae6004a0  sw          $zero, 0x4A0($s3)
    ctx->pc = 0x1c3eccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1184), GPR_U32(ctx, 0));
    // 0x1c3ed0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c3ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1c3ed4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c3ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c3ed8: 0xc0f71b8  jal         func_3DC6E0
    ctx->pc = 0x1C3ED8u;
    SET_GPR_U32(ctx, 31, 0x1C3EE0u);
    ctx->pc = 0x1C3EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3ED8u;
    // 0x1c3edc: 0xae7204c0  sw          $s2, 0x4C0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1216), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC6E0u, 0x1C3ED8u, 0x1C3EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3EE0u;
label_1c3ee0:
    // 0x1c3ee0: 0x8e6404c0  lw          $a0, 0x4C0($s3)
    ctx->pc = 0x1c3ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1216)));
    // 0x1c3ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3ee8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1c3ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c3eec: 0xae620470  sw          $v0, 0x470($s3)
    ctx->pc = 0x1c3eecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1136), GPR_U32(ctx, 2));
    // 0x1c3ef0: 0xae630474  sw          $v1, 0x474($s3)
    ctx->pc = 0x1c3ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1140), GPR_U32(ctx, 3));
    // 0x1c3ef4: 0xae640450  sw          $a0, 0x450($s3)
    ctx->pc = 0x1c3ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1104), GPR_U32(ctx, 4));
    // 0x1c3ef8: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x1c3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x1c3efc: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x1c3efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x1c3f00: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1c3f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1c3f04: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C3F04u;
    {
        const bool branch_taken_0x1c3f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F04u;
        // 0x1c3f08: 0xde6204c0  ld          $v0, 0x4C0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 1216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f04) {
            ctx->pc = 0x1C3F60u;
            goto label_1c3f60;
        }
    }
    ctx->pc = 0x1C3F0Cu;
    // 0x1c3f0c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c3f10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3f14: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x1c3f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x1c3f18: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1c3f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1c3f1c: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x1c3f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x1c3f20: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1c3f20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1c3f24: 0x528f8  dsll        $a1, $a1, 3
    ctx->pc = 0x1c3f24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 3);
    // 0x1c3f28: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x1c3f28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x1c3f2c: 0x3c06bfff  lui         $a2, 0xBFFF
    ctx->pc = 0x1c3f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49151 << 16));
    // 0x1c3f30: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1c3f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1c3f34: 0x63138  dsll        $a2, $a2, 4
    ctx->pc = 0x1c3f34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 4);
    // 0x1c3f38: 0x34c6000f  ori         $a2, $a2, 0xF
    ctx->pc = 0x1c3f38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15);
    // 0x1c3f3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c3f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c3f40: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x1c3f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x1c3f44: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c3f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c3f48: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x1c3f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x1c3f4c: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x1c3f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x1c3f50: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1c3f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1c3f54: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1c3f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1c3f58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C3F58u;
    {
        const bool branch_taken_0x1c3f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F58u;
        // 0x1c3f5c: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f58) {
            ctx->pc = 0x1C3F90u;
            goto label_1c3f90;
        }
    }
    ctx->pc = 0x1C3F60u;
label_1c3f60:
    // 0x1c3f60: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1c3f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1c3f64: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x1c3f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x1c3f68: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1c3f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1c3f6c: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x1c3f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x1c3f70: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1c3f70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1c3f74: 0x634f8  dsll        $a2, $a2, 19
    ctx->pc = 0x1c3f74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 19);
    // 0x1c3f78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c3f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c3f7c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1c3f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1c3f80: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1c3f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1c3f84: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1c3f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c3f88: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c3f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c3f8c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c3f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1c3f90:
    // 0x1c3f90: 0xfe6204c0  sd          $v0, 0x4C0($s3)
    ctx->pc = 0x1c3f90u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1216), GPR_U64(ctx, 2));
    // 0x1c3f94: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1c3f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3f9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3fa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c3fa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3fa4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c3fa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c3fa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c3fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3fac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FACu;
        // 0x1c3fb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3FB4u;
    // 0x1c3fb4: 0x0  nop
    ctx->pc = 0x1c3fb4u;
    // NOP
    ctx->pc = 0x1c3fb8u;
}
