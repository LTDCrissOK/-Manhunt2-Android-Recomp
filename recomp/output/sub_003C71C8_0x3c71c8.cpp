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

// Function: sub_003C71C8
// Address: 0x3c71c8 - 0x3c7360
void sub_003C71C8_0x3c71c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C71C8_0x3c71c8");
#endif

    switch (ctx->pc) {
        case 0x3c721cu: goto label_3c721c;
        case 0x3c724cu: goto label_3c724c;
        case 0x3c72a8u: goto label_3c72a8;
        default: break;
    }

    ctx->pc = 0x3c71c8u;

    // 0x3c71c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c71c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c71cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c71d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c71d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c71d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c71d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c71d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c71d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c71dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c71dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c71e0: 0x12220059  beq         $s1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3C71E0u;
    {
        const bool branch_taken_0x3c71e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C71E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C71E0u;
        // 0x3c71e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c71e0) {
            ctx->pc = 0x3C7348u;
            goto label_3c7348;
        }
    }
    ctx->pc = 0x3C71E8u;
    // 0x3c71e8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3c71e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3c71ec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C71ECu;
    {
        const bool branch_taken_0x3c71ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c71ec) {
            ctx->pc = 0x3C71F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C71ECu;
            // 0x3c71f0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7208u;
            goto label_3c7208;
        }
    }
    ctx->pc = 0x3C71F4u;
    // 0x3c71f4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3c71f8: 0x8c43cddc  lw          $v1, -0x3224($v0)
    ctx->pc = 0x3c71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42CDDCu));
    // 0x3c71fc: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3c71fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x3c7200: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3c7200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3c7204: 0x0  nop
    ctx->pc = 0x3c7204u;
    // NOP
label_3c7208:
    // 0x3c7208: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3c7208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3c720c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C720Cu;
    {
        const bool branch_taken_0x3c720c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c720c) {
            ctx->pc = 0x3C7210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C720Cu;
            // 0x3c7210: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7220u;
            goto label_3c7220;
        }
    }
    ctx->pc = 0x3C7214u;
    // 0x3c7214: 0xc0f1a98  jal         func_3C6A60
    ctx->pc = 0x3C7214u;
    SET_GPR_U32(ctx, 31, 0x3C721Cu);
    ctx->pc = 0x3C6A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6A60u, 0x3C7214u, 0x3C721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C721Cu;
label_3c721c:
    // 0x3c721c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3c721cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3c7220:
    // 0x3c7220: 0x3043ffdf  andi        $v1, $v0, 0xFFDF
    ctx->pc = 0x3c7220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x3c7224: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3c7224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3c7228: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C7228u;
    {
        const bool branch_taken_0x3c7228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7228u;
        // 0x3c722c: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7228) {
            ctx->pc = 0x3C7274u;
            goto label_3c7274;
        }
    }
    ctx->pc = 0x3C7230u;
    // 0x3c7230: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x3c7230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3c7234: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3C7234u;
    {
        const bool branch_taken_0x3c7234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7234u;
        // 0x3c7238: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7234) {
            ctx->pc = 0x3C72A8u;
            goto label_3c72a8;
        }
    }
    ctx->pc = 0x3C723Cu;
    // 0x3c723c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3C723Cu;
    {
        const bool branch_taken_0x3c723c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c723c) {
            ctx->pc = 0x3C7240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C723Cu;
            // 0x3c7240: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C726Cu;
            goto label_3c726c;
        }
    }
    ctx->pc = 0x3C7244u;
    // 0x3c7244: 0xc0f1a3a  jal         func_3C68E8
    ctx->pc = 0x3C7244u;
    SET_GPR_U32(ctx, 31, 0x3C724Cu);
    ctx->pc = 0x3C7248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7244u;
    // 0x3c7248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C68E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C68E8u, 0x3C7244u, 0x3C724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C724Cu;
label_3c724c:
    // 0x3c724c: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3C724Cu;
    {
        const bool branch_taken_0x3c724c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C724Cu;
        // 0x3c7250: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c724c) {
            ctx->pc = 0x3C7348u;
            goto label_3c7348;
        }
    }
    ctx->pc = 0x3C7254u;
    // 0x3c7254: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3c7254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3c7258: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3c7258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3c725c: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x3c725cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x3c7260: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3c7260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x3c7264: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3c7264u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c7268: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3c7268u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3c726c:
    // 0x3c726c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3c726cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3c7270: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3c7270u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_3c7274:
    // 0x3c7274: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3c7274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3c7278: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3C7278u;
    {
        const bool branch_taken_0x3c7278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7278u;
        // 0x3c727c: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7278) {
            ctx->pc = 0x3C72D0u;
            goto label_3c72d0;
        }
    }
    ctx->pc = 0x3C7280u;
    // 0x3c7280: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3c7280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3c7284: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x3c7284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3c7288: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3c7288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c728c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C728Cu;
    {
        const bool branch_taken_0x3c728c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c728c) {
            ctx->pc = 0x3C7290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C728Cu;
            // 0x3c7290: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C72B0u;
            goto label_3c72b0;
        }
    }
    ctx->pc = 0x3C7294u;
    // 0x3c7294: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3c7294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3c7298: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c7298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c729c: 0x24a51840  addiu       $a1, $a1, 0x1840
    ctx->pc = 0x3c729cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6208));
    // 0x3c72a0: 0xc0f27da  jal         func_3C9F68
    ctx->pc = 0x3C72A0u;
    SET_GPR_U32(ctx, 31, 0x3C72A8u);
    ctx->pc = 0x3C72A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C72A0u;
    // 0x3c72a4: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9F68u, 0x3C72A0u, 0x3C72A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C72A8u;
label_3c72a8:
    // 0x3c72a8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3C72A8u;
    {
        const bool branch_taken_0x3c72a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C72A8u;
        // 0x3c72ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c72a8) {
            ctx->pc = 0x3C7348u;
            goto label_3c7348;
        }
    }
    ctx->pc = 0x3C72B0u;
label_3c72b0:
    // 0x3c72b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c72b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c72b4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3c72b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3c72b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3c72b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3c72bc: 0xa091ffff  sb          $s1, -0x1($a0)
    ctx->pc = 0x3c72bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x3c72c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3c72c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3c72c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c72c8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3C72C8u;
    {
        const bool branch_taken_0x3c72c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C72C8u;
        // 0x3c72cc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c72c8) {
            ctx->pc = 0x3C7348u;
            goto label_3c7348;
        }
    }
    ctx->pc = 0x3C72D0u;
label_3c72d0:
    // 0x3c72d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3c72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3c72d4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3C72D4u;
    {
        const bool branch_taken_0x3c72d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c72d4) {
            ctx->pc = 0x3C72D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C72D4u;
            // 0x3c72d8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7314u;
            goto label_3c7314;
        }
    }
    ctx->pc = 0x3C72DCu;
    // 0x3c72dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c72dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c72e0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3c72e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3c72e4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3C72E4u;
    {
        const bool branch_taken_0x3c72e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c72e4) {
            ctx->pc = 0x3C72E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C72E4u;
            // 0x3c72e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7314u;
            goto label_3c7314;
        }
    }
    ctx->pc = 0x3C72ECu;
    // 0x3c72ec: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x3c72ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x3c72f0: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C72F0u;
    {
        const bool branch_taken_0x3c72f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x3c72f0) {
            ctx->pc = 0x3C72F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C72F0u;
            // 0x3c72f4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7314u;
            goto label_3c7314;
        }
    }
    ctx->pc = 0x3C72F8u;
    // 0x3c72f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3c72f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3c72fc: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3c72fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3c7300: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3c7300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3c7304: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c7304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c7308: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c7308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c730c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3C730Cu;
    {
        const bool branch_taken_0x3c730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C730Cu;
        // 0x3c7310: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c730c) {
            ctx->pc = 0x3C7348u;
            goto label_3c7348;
        }
    }
    ctx->pc = 0x3C7314u;
label_3c7314:
    // 0x3c7314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c7314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c7318: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c7318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c731c: 0x26070040  addiu       $a3, $s0, 0x40
    ctx->pc = 0x3c731cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3c7320: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c7320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c7324: 0x26060042  addiu       $a2, $s0, 0x42
    ctx->pc = 0x3c7324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
    // 0x3c7328: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3c7328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3c732c: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x3c732cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x3c7330: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c7330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7334: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x3c7334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x3c7338: 0xae070030  sw          $a3, 0x30($s0)
    ctx->pc = 0x3c7338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 7));
    // 0x3c733c: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x3c733cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x3c7340: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x3c7340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x3c7344: 0xa2110042  sb          $s1, 0x42($s0)
    ctx->pc = 0x3c7344u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 17));
label_3c7348:
    // 0x3c7348: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c7348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c734c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c734cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c7350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c7354: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7354u;
        // 0x3c7358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C735Cu;
    // 0x3c735c: 0x0  nop
    ctx->pc = 0x3c735cu;
    // NOP
    ctx->pc = 0x3c7360u;
}
