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

// Function: sub_003C68E8
// Address: 0x3c68e8 - 0x3c69f8
void sub_003C68E8_0x3c68e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C68E8_0x3c68e8");
#endif

    switch (ctx->pc) {
        case 0x3c68e8u: goto label_3c68e8;
        case 0x3c68ecu: goto label_3c68ec;
        case 0x3c68f0u: goto label_3c68f0;
        case 0x3c68f4u: goto label_3c68f4;
        case 0x3c68f8u: goto label_3c68f8;
        case 0x3c68fcu: goto label_3c68fc;
        case 0x3c6900u: goto label_3c6900;
        case 0x3c6904u: goto label_3c6904;
        case 0x3c6908u: goto label_3c6908;
        case 0x3c690cu: goto label_3c690c;
        case 0x3c6910u: goto label_3c6910;
        case 0x3c6914u: goto label_3c6914;
        case 0x3c6918u: goto label_3c6918;
        case 0x3c691cu: goto label_3c691c;
        case 0x3c6920u: goto label_3c6920;
        case 0x3c6924u: goto label_3c6924;
        case 0x3c6928u: goto label_3c6928;
        case 0x3c692cu: goto label_3c692c;
        case 0x3c6930u: goto label_3c6930;
        case 0x3c6934u: goto label_3c6934;
        case 0x3c6938u: goto label_3c6938;
        case 0x3c693cu: goto label_3c693c;
        case 0x3c6940u: goto label_3c6940;
        case 0x3c6944u: goto label_3c6944;
        case 0x3c6948u: goto label_3c6948;
        case 0x3c694cu: goto label_3c694c;
        case 0x3c6950u: goto label_3c6950;
        case 0x3c6954u: goto label_3c6954;
        case 0x3c6958u: goto label_3c6958;
        case 0x3c695cu: goto label_3c695c;
        case 0x3c6960u: goto label_3c6960;
        case 0x3c6964u: goto label_3c6964;
        case 0x3c6968u: goto label_3c6968;
        case 0x3c696cu: goto label_3c696c;
        case 0x3c6970u: goto label_3c6970;
        case 0x3c6974u: goto label_3c6974;
        case 0x3c6978u: goto label_3c6978;
        case 0x3c697cu: goto label_3c697c;
        case 0x3c6980u: goto label_3c6980;
        case 0x3c6984u: goto label_3c6984;
        case 0x3c6988u: goto label_3c6988;
        case 0x3c698cu: goto label_3c698c;
        case 0x3c6990u: goto label_3c6990;
        case 0x3c6994u: goto label_3c6994;
        case 0x3c6998u: goto label_3c6998;
        case 0x3c699cu: goto label_3c699c;
        case 0x3c69a0u: goto label_3c69a0;
        case 0x3c69a4u: goto label_3c69a4;
        case 0x3c69a8u: goto label_3c69a8;
        case 0x3c69acu: goto label_3c69ac;
        case 0x3c69b0u: goto label_3c69b0;
        case 0x3c69b4u: goto label_3c69b4;
        case 0x3c69b8u: goto label_3c69b8;
        case 0x3c69bcu: goto label_3c69bc;
        case 0x3c69c0u: goto label_3c69c0;
        case 0x3c69c4u: goto label_3c69c4;
        case 0x3c69c8u: goto label_3c69c8;
        case 0x3c69ccu: goto label_3c69cc;
        case 0x3c69d0u: goto label_3c69d0;
        case 0x3c69d4u: goto label_3c69d4;
        case 0x3c69d8u: goto label_3c69d8;
        case 0x3c69dcu: goto label_3c69dc;
        case 0x3c69e0u: goto label_3c69e0;
        case 0x3c69e4u: goto label_3c69e4;
        case 0x3c69e8u: goto label_3c69e8;
        case 0x3c69ecu: goto label_3c69ec;
        case 0x3c69f0u: goto label_3c69f0;
        case 0x3c69f4u: goto label_3c69f4;
        default: break;
    }

    ctx->pc = 0x3c68e8u;

label_3c68e8:
    // 0x3c68e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c68e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c68ec:
    // 0x3c68ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c68ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c68f0:
    // 0x3c68f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c68f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3c68f4:
    // 0x3c68f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c68f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c68f8:
    // 0x3c68f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c68f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3c68fc:
    // 0x3c68fc: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_3c6900:
    if (ctx->pc == 0x3C6900u) {
        ctx->pc = 0x3C6900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68FCu;
        // 0x3c6900: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6904u;
        goto label_3c6904;
    }
    ctx->pc = 0x3C68FCu;
    {
        const bool branch_taken_0x3c68fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68FCu;
        // 0x3c6900: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c68fc) {
            ctx->pc = 0x3C6920u;
            goto label_3c6920;
        }
    }
    ctx->pc = 0x3C6904u;
label_3c6904:
    // 0x3c6904: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c6904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3c6908:
    // 0x3c6908: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x3c6908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_3c690c:
    // 0x3c690c: 0x8c44cddc  lw          $a0, -0x3224($v0)
    ctx->pc = 0x3c690cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954460)));
label_3c6910:
    // 0x3c6910: 0xc0f1bbe  jal         func_3C6EF8
label_3c6914:
    if (ctx->pc == 0x3C6914u) {
        ctx->pc = 0x3C6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6910u;
        // 0x3c6914: 0x24a568e8  addiu       $a1, $a1, 0x68E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6918u;
        goto label_3c6918;
    }
    ctx->pc = 0x3C6910u;
    SET_GPR_U32(ctx, 31, 0x3C6918u);
    ctx->pc = 0x3C6914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6910u;
    // 0x3c6914: 0x24a568e8  addiu       $a1, $a1, 0x68E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6EF8u, 0x3C6910u, 0x3C6918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6918u;
label_3c6918:
    // 0x3c6918: 0x10000031  b           . + 4 + (0x31 << 2)
label_3c691c:
    if (ctx->pc == 0x3C691Cu) {
        ctx->pc = 0x3C691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6918u;
        // 0x3c691c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6920u;
        goto label_3c6920;
    }
    ctx->pc = 0x3C6918u;
    {
        const bool branch_taken_0x3c6918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6918u;
        // 0x3c691c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6918) {
            ctx->pc = 0x3C69E0u;
            goto label_3c69e0;
        }
    }
    ctx->pc = 0x3C6920u;
label_3c6920:
    // 0x3c6920: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3c6920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3c6924:
    // 0x3c6924: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3c6928:
    if (ctx->pc == 0x3C6928u) {
        ctx->pc = 0x3C6928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6924u;
        // 0x3c6928: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C692Cu;
        goto label_3c692c;
    }
    ctx->pc = 0x3C6924u;
    {
        const bool branch_taken_0x3c6924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6924) {
            ctx->pc = 0x3C6928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6924u;
            // 0x3c6928: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C6940u;
            goto label_3c6940;
        }
    }
    ctx->pc = 0x3C692Cu;
label_3c692c:
    // 0x3c692c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c692cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3c6930:
    // 0x3c6930: 0x8c43cddc  lw          $v1, -0x3224($v0)
    ctx->pc = 0x3c6930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954460)));
label_3c6934:
    // 0x3c6934: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3c6934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3c6938:
    // 0x3c6938: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3c6938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3c693c:
    // 0x3c693c: 0x0  nop
    ctx->pc = 0x3c693cu;
    // NOP
label_3c6940:
    // 0x3c6940: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3c6940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_3c6944:
    // 0x3c6944: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3c6948:
    if (ctx->pc == 0x3C6948u) {
        ctx->pc = 0x3C6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6944u;
        // 0x3c6948: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C694Cu;
        goto label_3c694c;
    }
    ctx->pc = 0x3C6944u;
    {
        const bool branch_taken_0x3c6944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6944) {
            ctx->pc = 0x3C6948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6944u;
            // 0x3c6948: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C6958u;
            goto label_3c6958;
        }
    }
    ctx->pc = 0x3C694Cu;
label_3c694c:
    // 0x3c694c: 0xc0f1a98  jal         func_3C6A60
label_3c6950:
    if (ctx->pc == 0x3C6950u) {
        ctx->pc = 0x3C6954u;
        goto label_3c6954;
    }
    ctx->pc = 0x3C694Cu;
    SET_GPR_U32(ctx, 31, 0x3C6954u);
    ctx->pc = 0x3C6A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6A60u, 0x3C694Cu, 0x3C6954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6954u;
label_3c6954:
    // 0x3c6954: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x3c6954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3c6958:
    // 0x3c6958: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x3c6958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3c695c:
    // 0x3c695c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3c6960:
    if (ctx->pc == 0x3C6960u) {
        ctx->pc = 0x3C6960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C695Cu;
        // 0x3c6960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6964u;
        goto label_3c6964;
    }
    ctx->pc = 0x3C695Cu;
    {
        const bool branch_taken_0x3c695c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C695Cu;
        // 0x3c6960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c695c) {
            ctx->pc = 0x3C69DCu;
            goto label_3c69dc;
        }
    }
    ctx->pc = 0x3C6964u;
label_3c6964:
    // 0x3c6964: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x3c6964u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3c6968:
    // 0x3c6968: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
label_3c696c:
    if (ctx->pc == 0x3C696Cu) {
        ctx->pc = 0x3C696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6968u;
        // 0x3c696c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6970u;
        goto label_3c6970;
    }
    ctx->pc = 0x3C6968u;
    {
        const bool branch_taken_0x3c6968 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6968) {
            ctx->pc = 0x3C696Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6968u;
            // 0x3c696c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C698Cu;
            goto label_3c698c;
        }
    }
    ctx->pc = 0x3C6970u;
label_3c6970:
    // 0x3c6970: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3c6974:
    if (ctx->pc == 0x3C6974u) {
        ctx->pc = 0x3C6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6970u;
        // 0x3c6974: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6978u;
        goto label_3c6978;
    }
    ctx->pc = 0x3C6970u;
    {
        const bool branch_taken_0x3c6970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6970u;
        // 0x3c6974: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6970) {
            ctx->pc = 0x3C69E0u;
            goto label_3c69e0;
        }
    }
    ctx->pc = 0x3C6978u;
label_3c6978:
    // 0x3c6978: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x3c6978u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3c697c:
    // 0x3c697c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c6980:
    // 0x3c6980: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3c6980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3c6984:
    // 0x3c6984: 0x10000015  b           . + 4 + (0x15 << 2)
label_3c6988:
    if (ctx->pc == 0x3C6988u) {
        ctx->pc = 0x3C6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6984u;
        // 0x3c6988: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C698Cu;
        goto label_3c698c;
    }
    ctx->pc = 0x3C6984u;
    {
        const bool branch_taken_0x3c6984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6984u;
        // 0x3c6988: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6984) {
            ctx->pc = 0x3C69DCu;
            goto label_3c69dc;
        }
    }
    ctx->pc = 0x3C698Cu;
label_3c698c:
    // 0x3c698c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3c698cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_3c6990:
    // 0x3c6990: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x3c6990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_3c6994:
    // 0x3c6994: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c6994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c6998:
    // 0x3c6998: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_3c699c:
    if (ctx->pc == 0x3C699Cu) {
        ctx->pc = 0x3C699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6998u;
        // 0x3c699c: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C69A0u;
        goto label_3c69a0;
    }
    ctx->pc = 0x3C6998u;
    {
        const bool branch_taken_0x3c6998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6998u;
        // 0x3c699c: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6998) {
            ctx->pc = 0x3C69A4u;
            goto label_3c69a4;
        }
    }
    ctx->pc = 0x3C69A0u;
label_3c69a0:
    // 0x3c69a0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x3c69a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3c69a4:
    // 0x3c69a4: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
label_3c69a8:
    if (ctx->pc == 0x3C69A8u) {
        ctx->pc = 0x3C69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69A4u;
        // 0x3c69a8: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C69ACu;
        goto label_3c69ac;
    }
    ctx->pc = 0x3C69A4u;
    {
        const bool branch_taken_0x3c69a4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3C69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69A4u;
        // 0x3c69a8: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c69a4) {
            ctx->pc = 0x3C69D8u;
            goto label_3c69d8;
        }
    }
    ctx->pc = 0x3C69ACu;
label_3c69ac:
    // 0x3c69ac: 0x0  nop
    ctx->pc = 0x3c69acu;
    // NOP
label_3c69b0:
    // 0x3c69b0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3c69b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3c69b4:
    // 0x3c69b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c69b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c69b8:
    // 0x3c69b8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x3c69b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3c69bc:
    // 0x3c69bc: 0x40f809  jalr        $v0
label_3c69c0:
    if (ctx->pc == 0x3C69C0u) {
        ctx->pc = 0x3C69C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69BCu;
        // 0x3c69c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C69C4u;
        goto label_3c69c4;
    }
    ctx->pc = 0x3C69BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C69C4u);
        ctx->pc = 0x3C69C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69BCu;
        // 0x3c69c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C69BCu, 0x3C69C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C69C4u;
label_3c69c4:
    // 0x3c69c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c69c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c69c8:
    // 0x3c69c8: 0x1860ffeb  blez        $v1, . + 4 + (-0x15 << 2)
label_3c69cc:
    if (ctx->pc == 0x3C69CCu) {
        ctx->pc = 0x3C69CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69C8u;
        // 0x3c69cc: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C69D0u;
        goto label_3c69d0;
    }
    ctx->pc = 0x3C69C8u;
    {
        const bool branch_taken_0x3c69c8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3C69CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69C8u;
        // 0x3c69cc: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c69c8) {
            ctx->pc = 0x3C6978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6978;
        }
    }
    ctx->pc = 0x3C69D0u;
label_3c69d0:
    // 0x3c69d0: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
label_3c69d4:
    if (ctx->pc == 0x3C69D4u) {
        ctx->pc = 0x3C69D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69D0u;
        // 0x3c69d4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C69D8u;
        goto label_3c69d8;
    }
    ctx->pc = 0x3C69D0u;
    {
        const bool branch_taken_0x3c69d0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x3C69D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69D0u;
        // 0x3c69d4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c69d0) {
            ctx->pc = 0x3C69B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c69b0;
        }
    }
    ctx->pc = 0x3C69D8u;
label_3c69d8:
    // 0x3c69d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c69d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c69dc:
    // 0x3c69dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c69dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c69e0:
    // 0x3c69e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c69e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c69e4:
    // 0x3c69e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c69e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c69e8:
    // 0x3c69e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c69e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c69ec:
    // 0x3c69ec: 0x3e00008  jr          $ra
label_3c69f0:
    if (ctx->pc == 0x3C69F0u) {
        ctx->pc = 0x3C69F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69ECu;
        // 0x3c69f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C69F4u;
        goto label_3c69f4;
    }
    ctx->pc = 0x3C69ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C69F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C69ECu;
        // 0x3c69f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C69ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C69F4u;
label_3c69f4:
    // 0x3c69f4: 0x0  nop
    ctx->pc = 0x3c69f4u;
    // NOP
    ctx->pc = 0x3c69f8u;
}
