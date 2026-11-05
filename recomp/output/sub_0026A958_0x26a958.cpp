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

// Function: sub_0026A958
// Address: 0x26a958 - 0x26ab50
void sub_0026A958_0x26a958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A958_0x26a958");
#endif

    switch (ctx->pc) {
        case 0x26a958u: goto label_26a958;
        case 0x26a95cu: goto label_26a95c;
        case 0x26a960u: goto label_26a960;
        case 0x26a964u: goto label_26a964;
        case 0x26a968u: goto label_26a968;
        case 0x26a96cu: goto label_26a96c;
        case 0x26a970u: goto label_26a970;
        case 0x26a974u: goto label_26a974;
        case 0x26a978u: goto label_26a978;
        case 0x26a97cu: goto label_26a97c;
        case 0x26a980u: goto label_26a980;
        case 0x26a984u: goto label_26a984;
        case 0x26a988u: goto label_26a988;
        case 0x26a98cu: goto label_26a98c;
        case 0x26a990u: goto label_26a990;
        case 0x26a994u: goto label_26a994;
        case 0x26a998u: goto label_26a998;
        case 0x26a99cu: goto label_26a99c;
        case 0x26a9a0u: goto label_26a9a0;
        case 0x26a9a4u: goto label_26a9a4;
        case 0x26a9a8u: goto label_26a9a8;
        case 0x26a9acu: goto label_26a9ac;
        case 0x26a9b0u: goto label_26a9b0;
        case 0x26a9b4u: goto label_26a9b4;
        case 0x26a9b8u: goto label_26a9b8;
        case 0x26a9bcu: goto label_26a9bc;
        case 0x26a9c0u: goto label_26a9c0;
        case 0x26a9c4u: goto label_26a9c4;
        case 0x26a9c8u: goto label_26a9c8;
        case 0x26a9ccu: goto label_26a9cc;
        case 0x26a9d0u: goto label_26a9d0;
        case 0x26a9d4u: goto label_26a9d4;
        case 0x26a9d8u: goto label_26a9d8;
        case 0x26a9dcu: goto label_26a9dc;
        case 0x26a9e0u: goto label_26a9e0;
        case 0x26a9e4u: goto label_26a9e4;
        case 0x26a9e8u: goto label_26a9e8;
        case 0x26a9ecu: goto label_26a9ec;
        case 0x26a9f0u: goto label_26a9f0;
        case 0x26a9f4u: goto label_26a9f4;
        case 0x26a9f8u: goto label_26a9f8;
        case 0x26a9fcu: goto label_26a9fc;
        case 0x26aa00u: goto label_26aa00;
        case 0x26aa04u: goto label_26aa04;
        case 0x26aa08u: goto label_26aa08;
        case 0x26aa0cu: goto label_26aa0c;
        case 0x26aa10u: goto label_26aa10;
        case 0x26aa14u: goto label_26aa14;
        case 0x26aa18u: goto label_26aa18;
        case 0x26aa1cu: goto label_26aa1c;
        case 0x26aa20u: goto label_26aa20;
        case 0x26aa24u: goto label_26aa24;
        case 0x26aa28u: goto label_26aa28;
        case 0x26aa2cu: goto label_26aa2c;
        case 0x26aa30u: goto label_26aa30;
        case 0x26aa34u: goto label_26aa34;
        case 0x26aa38u: goto label_26aa38;
        case 0x26aa3cu: goto label_26aa3c;
        case 0x26aa40u: goto label_26aa40;
        case 0x26aa44u: goto label_26aa44;
        case 0x26aa48u: goto label_26aa48;
        case 0x26aa4cu: goto label_26aa4c;
        case 0x26aa50u: goto label_26aa50;
        case 0x26aa54u: goto label_26aa54;
        case 0x26aa58u: goto label_26aa58;
        case 0x26aa5cu: goto label_26aa5c;
        case 0x26aa60u: goto label_26aa60;
        case 0x26aa64u: goto label_26aa64;
        case 0x26aa68u: goto label_26aa68;
        case 0x26aa6cu: goto label_26aa6c;
        case 0x26aa70u: goto label_26aa70;
        case 0x26aa74u: goto label_26aa74;
        case 0x26aa78u: goto label_26aa78;
        case 0x26aa7cu: goto label_26aa7c;
        case 0x26aa80u: goto label_26aa80;
        case 0x26aa84u: goto label_26aa84;
        case 0x26aa88u: goto label_26aa88;
        case 0x26aa8cu: goto label_26aa8c;
        case 0x26aa90u: goto label_26aa90;
        case 0x26aa94u: goto label_26aa94;
        case 0x26aa98u: goto label_26aa98;
        case 0x26aa9cu: goto label_26aa9c;
        case 0x26aaa0u: goto label_26aaa0;
        case 0x26aaa4u: goto label_26aaa4;
        case 0x26aaa8u: goto label_26aaa8;
        case 0x26aaacu: goto label_26aaac;
        case 0x26aab0u: goto label_26aab0;
        case 0x26aab4u: goto label_26aab4;
        case 0x26aab8u: goto label_26aab8;
        case 0x26aabcu: goto label_26aabc;
        case 0x26aac0u: goto label_26aac0;
        case 0x26aac4u: goto label_26aac4;
        case 0x26aac8u: goto label_26aac8;
        case 0x26aaccu: goto label_26aacc;
        case 0x26aad0u: goto label_26aad0;
        case 0x26aad4u: goto label_26aad4;
        case 0x26aad8u: goto label_26aad8;
        case 0x26aadcu: goto label_26aadc;
        case 0x26aae0u: goto label_26aae0;
        case 0x26aae4u: goto label_26aae4;
        case 0x26aae8u: goto label_26aae8;
        case 0x26aaecu: goto label_26aaec;
        case 0x26aaf0u: goto label_26aaf0;
        case 0x26aaf4u: goto label_26aaf4;
        case 0x26aaf8u: goto label_26aaf8;
        case 0x26aafcu: goto label_26aafc;
        case 0x26ab00u: goto label_26ab00;
        case 0x26ab04u: goto label_26ab04;
        case 0x26ab08u: goto label_26ab08;
        case 0x26ab0cu: goto label_26ab0c;
        case 0x26ab10u: goto label_26ab10;
        case 0x26ab14u: goto label_26ab14;
        case 0x26ab18u: goto label_26ab18;
        case 0x26ab1cu: goto label_26ab1c;
        case 0x26ab20u: goto label_26ab20;
        case 0x26ab24u: goto label_26ab24;
        case 0x26ab28u: goto label_26ab28;
        case 0x26ab2cu: goto label_26ab2c;
        case 0x26ab30u: goto label_26ab30;
        case 0x26ab34u: goto label_26ab34;
        case 0x26ab38u: goto label_26ab38;
        case 0x26ab3cu: goto label_26ab3c;
        case 0x26ab40u: goto label_26ab40;
        case 0x26ab44u: goto label_26ab44;
        case 0x26ab48u: goto label_26ab48;
        case 0x26ab4cu: goto label_26ab4c;
        default: break;
    }

    ctx->pc = 0x26a958u;

label_26a958:
    // 0x26a958: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26a958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_26a95c:
    // 0x26a95c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x26a95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_26a960:
    // 0x26a960: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26a960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_26a964:
    // 0x26a964: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26a964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26a968:
    // 0x26a968: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x26a968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_26a96c:
    // 0x26a96c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26a96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_26a970:
    // 0x26a970: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x26a970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_26a974:
    // 0x26a974: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x26a974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_26a978:
    // 0x26a978: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x26a978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_26a97c:
    // 0x26a97c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x26a97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_26a980:
    // 0x26a980: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x26a980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_26a984:
    // 0x26a984: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x26a984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_26a988:
    // 0x26a988: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x26a988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_26a98c:
    // 0x26a98c: 0xc0d764e  jal         func_35D938
label_26a990:
    if (ctx->pc == 0x26A990u) {
        ctx->pc = 0x26A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A98Cu;
        // 0x26a990: 0x8e840220  lw          $a0, 0x220($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A994u;
        goto label_26a994;
    }
    ctx->pc = 0x26A98Cu;
    SET_GPR_U32(ctx, 31, 0x26A994u);
    ctx->pc = 0x26A990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A98Cu;
    // 0x26a990: 0x8e840220  lw          $a0, 0x220($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D938u, 0x26A98Cu, 0x26A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A994u;
label_26a994:
    // 0x26a994: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_26a998:
    if (ctx->pc == 0x26A998u) {
        ctx->pc = 0x26A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A994u;
        // 0x26a998: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A99Cu;
        goto label_26a99c;
    }
    ctx->pc = 0x26A994u;
    {
        const bool branch_taken_0x26a994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A994u;
        // 0x26a998: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a994) {
            ctx->pc = 0x26AB14u;
            goto label_26ab14;
        }
    }
    ctx->pc = 0x26A99Cu;
label_26a99c:
    // 0x26a99c: 0x8e830220  lw          $v1, 0x220($s4)
    ctx->pc = 0x26a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 544)));
label_26a9a0:
    // 0x26a9a0: 0x8c720034  lw          $s2, 0x34($v1)
    ctx->pc = 0x26a9a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_26a9a4:
    // 0x26a9a4: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x26a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_26a9a8:
    // 0x26a9a8: 0x30427001  andi        $v0, $v0, 0x7001
    ctx->pc = 0x26a9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)28673);
label_26a9ac:
    // 0x26a9ac: 0x38427001  xori        $v0, $v0, 0x7001
    ctx->pc = 0x26a9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)28673);
label_26a9b0:
    // 0x26a9b0: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
label_26a9b4:
    if (ctx->pc == 0x26A9B4u) {
        ctx->pc = 0x26A9B8u;
        goto label_26a9b8;
    }
    ctx->pc = 0x26A9B0u;
    {
        const bool branch_taken_0x26a9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a9b0) {
            ctx->pc = 0x26AB14u;
            goto label_26ab14;
        }
    }
    ctx->pc = 0x26A9B8u;
label_26a9b8:
    // 0x26a9b8: 0xc076430  jal         func_1D90C0
label_26a9bc:
    if (ctx->pc == 0x26A9BCu) {
        ctx->pc = 0x26A9C0u;
        goto label_26a9c0;
    }
    ctx->pc = 0x26A9B8u;
    SET_GPR_U32(ctx, 31, 0x26A9C0u);
    ctx->pc = 0x1D90C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D90C0u, 0x26A9B8u, 0x26A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9C0u;
label_26a9c0:
    // 0x26a9c0: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_26a9c4:
    if (ctx->pc == 0x26A9C4u) {
        ctx->pc = 0x26A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9C0u;
        // 0x26a9c4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A9C8u;
        goto label_26a9c8;
    }
    ctx->pc = 0x26A9C0u;
    {
        const bool branch_taken_0x26a9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9C0u;
        // 0x26a9c4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9c0) {
            ctx->pc = 0x26AB10u;
            goto label_26ab10;
        }
    }
    ctx->pc = 0x26A9C8u;
label_26a9c8:
    // 0x26a9c8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x26a9c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a9cc:
    // 0x26a9cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26a9ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a9d0:
    // 0x26a9d0: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x26a9d0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
label_26a9d4:
    // 0x26a9d4: 0x3c152000  lui         $s5, 0x2000
    ctx->pc = 0x26a9d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8192 << 16));
label_26a9d8:
    // 0x26a9d8: 0x10000044  b           . + 4 + (0x44 << 2)
label_26a9dc:
    if (ctx->pc == 0x26A9DCu) {
        ctx->pc = 0x26A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9D8u;
        // 0x26a9dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A9E0u;
        goto label_26a9e0;
    }
    ctx->pc = 0x26A9D8u;
    {
        const bool branch_taken_0x26a9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9D8u;
        // 0x26a9dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9d8) {
            ctx->pc = 0x26AAECu;
            goto label_26aaec;
        }
    }
    ctx->pc = 0x26A9E0u;
label_26a9e0:
    // 0x26a9e0: 0x8c6291dc  lw          $v0, -0x6E24($v1)
    ctx->pc = 0x26a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939100)));
label_26a9e4:
    // 0x26a9e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x26a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_26a9e8:
    // 0x26a9e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26a9ec:
    // 0x26a9ec: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x26a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_26a9f0:
    // 0x26a9f0: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x26a9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
label_26a9f4:
    // 0x26a9f4: 0x54600033  bnel        $v1, $zero, . + 4 + (0x33 << 2)
label_26a9f8:
    if (ctx->pc == 0x26A9F8u) {
        ctx->pc = 0x26A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9F4u;
        // 0x26a9f8: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A9FCu;
        goto label_26a9fc;
    }
    ctx->pc = 0x26A9F4u;
    {
        const bool branch_taken_0x26a9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a9f4) {
            ctx->pc = 0x26A9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A9F4u;
            // 0x26a9f8: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AAC4u;
            goto label_26aac4;
        }
    }
    ctx->pc = 0x26A9FCu;
label_26a9fc:
    // 0x26a9fc: 0x8e4402e4  lw          $a0, 0x2E4($s2)
    ctx->pc = 0x26a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 740)));
label_26aa00:
    // 0x26aa00: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x26aa00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26aa04:
    // 0x26aa04: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x26aa04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_26aa08:
    // 0x26aa08: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x26aa08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26aa0c:
    // 0x26aa0c: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x26aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_26aa10:
    // 0x26aa10: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x26aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_26aa14:
    // 0x26aa14: 0x60f809  jalr        $v1
label_26aa18:
    if (ctx->pc == 0x26AA18u) {
        ctx->pc = 0x26AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA14u;
        // 0x26aa18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA1Cu;
        goto label_26aa1c;
    }
    ctx->pc = 0x26AA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26AA1Cu);
        ctx->pc = 0x26AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA14u;
        // 0x26aa18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AA14u, 0x26AA1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AA1Cu;
label_26aa1c:
    // 0x26aa1c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_26aa20:
    // 0x26aa20: 0x8c6291dc  lw          $v0, -0x6E24($v1)
    ctx->pc = 0x26aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939100)));
label_26aa24:
    // 0x26aa24: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x26aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_26aa28:
    // 0x26aa28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26aa2c:
    // 0x26aa2c: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x26aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_26aa30:
    // 0x26aa30: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x26aa30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
label_26aa34:
    // 0x26aa34: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_26aa38:
    if (ctx->pc == 0x26AA38u) {
        ctx->pc = 0x26AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA34u;
        // 0x26aa38: 0x8c500034  lw          $s0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA3Cu;
        goto label_26aa3c;
    }
    ctx->pc = 0x26AA34u;
    {
        const bool branch_taken_0x26aa34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aa34) {
            ctx->pc = 0x26AA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AA34u;
            // 0x26aa38: 0x8c500034  lw          $s0, 0x34($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AA3Cu;
            goto label_26aa3c;
        }
    }
    ctx->pc = 0x26AA3Cu;
label_26aa3c:
    // 0x26aa3c: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x26aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_26aa40:
    // 0x26aa40: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x26aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_26aa44:
    // 0x26aa44: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x26aa44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_26aa48:
    // 0x26aa48: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_26aa4c:
    if (ctx->pc == 0x26AA4Cu) {
        ctx->pc = 0x26AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA48u;
        // 0x26aa4c: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA50u;
        goto label_26aa50;
    }
    ctx->pc = 0x26AA48u;
    {
        const bool branch_taken_0x26aa48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26aa48) {
            ctx->pc = 0x26AA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AA48u;
            // 0x26aa4c: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AA6Cu;
            goto label_26aa6c;
        }
    }
    ctx->pc = 0x26AA50u;
label_26aa50:
    // 0x26aa50: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x26aa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
label_26aa54:
    // 0x26aa54: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_26aa58:
    if (ctx->pc == 0x26AA58u) {
        ctx->pc = 0x26AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA54u;
        // 0x26aa58: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA5Cu;
        goto label_26aa5c;
    }
    ctx->pc = 0x26AA54u;
    {
        const bool branch_taken_0x26aa54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26aa54) {
            ctx->pc = 0x26AA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AA54u;
            // 0x26aa58: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AA6Cu;
            goto label_26aa6c;
        }
    }
    ctx->pc = 0x26AA5Cu;
label_26aa5c:
    // 0x26aa5c: 0x961024  and         $v0, $a0, $s6
    ctx->pc = 0x26aa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 22));
label_26aa60:
    // 0x26aa60: 0x54560007  bnel        $v0, $s6, . + 4 + (0x7 << 2)
label_26aa64:
    if (ctx->pc == 0x26AA64u) {
        ctx->pc = 0x26AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA60u;
        // 0x26aa64: 0x8e0300b8  lw          $v1, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA68u;
        goto label_26aa68;
    }
    ctx->pc = 0x26AA60u;
    {
        const bool branch_taken_0x26aa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x26aa60) {
            ctx->pc = 0x26AA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AA60u;
            // 0x26aa64: 0x8e0300b8  lw          $v1, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AA80u;
            goto label_26aa80;
        }
    }
    ctx->pc = 0x26AA68u;
label_26aa68:
    // 0x26aa68: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x26aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_26aa6c:
    // 0x26aa6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26aa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26aa70:
    // 0x26aa70: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x26aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_26aa74:
    // 0x26aa74: 0x40f809  jalr        $v0
label_26aa78:
    if (ctx->pc == 0x26AA78u) {
        ctx->pc = 0x26AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA74u;
        // 0x26aa78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA7Cu;
        goto label_26aa7c;
    }
    ctx->pc = 0x26AA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AA7Cu);
        ctx->pc = 0x26AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA74u;
        // 0x26aa78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AA74u, 0x26AA7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AA7Cu;
label_26aa7c:
    // 0x26aa7c: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x26aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_26aa80:
    // 0x26aa80: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x26aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_26aa84:
    // 0x26aa84: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x26aa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_26aa88:
    // 0x26aa88: 0x54550017  bnel        $v0, $s5, . + 4 + (0x17 << 2)
label_26aa8c:
    if (ctx->pc == 0x26AA8Cu) {
        ctx->pc = 0x26AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA88u;
        // 0x26aa8c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA90u;
        goto label_26aa90;
    }
    ctx->pc = 0x26AA88u;
    {
        const bool branch_taken_0x26aa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x26aa88) {
            ctx->pc = 0x26AA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AA88u;
            // 0x26aa8c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AAE8u;
            goto label_26aae8;
        }
    }
    ctx->pc = 0x26AA90u;
label_26aa90:
    // 0x26aa90: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x26aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_26aa94:
    // 0x26aa94: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x26aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_26aa98:
    // 0x26aa98: 0x24427b70  addiu       $v0, $v0, 0x7B70
    ctx->pc = 0x26aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31600));
label_26aa9c:
    // 0x26aa9c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x26aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26aaa0:
    // 0x26aaa0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x26aaa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_26aaa4:
    // 0x26aaa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26aaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26aaa8:
    // 0x26aaa8: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x26aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_26aaac:
    // 0x26aaac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26aaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26aab0:
    // 0x26aab0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26aab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26aab4:
    // 0x26aab4: 0x40f809  jalr        $v0
label_26aab8:
    if (ctx->pc == 0x26AAB8u) {
        ctx->pc = 0x26AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAB4u;
        // 0x26aab8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AABCu;
        goto label_26aabc;
    }
    ctx->pc = 0x26AAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AABCu);
        ctx->pc = 0x26AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAB4u;
        // 0x26aab8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AAB4u, 0x26AABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AABCu;
label_26aabc:
    // 0x26aabc: 0x1000000a  b           . + 4 + (0xA << 2)
label_26aac0:
    if (ctx->pc == 0x26AAC0u) {
        ctx->pc = 0x26AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AABCu;
        // 0x26aac0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AAC4u;
        goto label_26aac4;
    }
    ctx->pc = 0x26AABCu;
    {
        const bool branch_taken_0x26aabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AABCu;
        // 0x26aac0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aabc) {
            ctx->pc = 0x26AAE8u;
            goto label_26aae8;
        }
    }
    ctx->pc = 0x26AAC4u;
label_26aac4:
    // 0x26aac4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x26aac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_26aac8:
    // 0x26aac8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_26aacc:
    if (ctx->pc == 0x26AACCu) {
        ctx->pc = 0x26AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAC8u;
        // 0x26aacc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AAD0u;
        goto label_26aad0;
    }
    ctx->pc = 0x26AAC8u;
    {
        const bool branch_taken_0x26aac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26aac8) {
            ctx->pc = 0x26AACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AAC8u;
            // 0x26aacc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AAE8u;
            goto label_26aae8;
        }
    }
    ctx->pc = 0x26AAD0u;
label_26aad0:
    // 0x26aad0: 0x8e4402e4  lw          $a0, 0x2E4($s2)
    ctx->pc = 0x26aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 740)));
label_26aad4:
    // 0x26aad4: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x26aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_26aad8:
    // 0x26aad8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x26aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_26aadc:
    // 0x26aadc: 0x40f809  jalr        $v0
label_26aae0:
    if (ctx->pc == 0x26AAE0u) {
        ctx->pc = 0x26AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AADCu;
        // 0x26aae0: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AAE4u;
        goto label_26aae4;
    }
    ctx->pc = 0x26AADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AAE4u);
        ctx->pc = 0x26AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AADCu;
        // 0x26aae0: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AADCu, 0x26AAE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AAE4u;
label_26aae4:
    // 0x26aae4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x26aae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_26aae8:
    // 0x26aae8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26aae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_26aaec:
    // 0x26aaec: 0xc0796ac  jal         func_1E5AB0
label_26aaf0:
    if (ctx->pc == 0x26AAF0u) {
        ctx->pc = 0x26AAF4u;
        goto label_26aaf4;
    }
    ctx->pc = 0x26AAECu;
    SET_GPR_U32(ctx, 31, 0x26AAF4u);
    ctx->pc = 0x1E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AB0u, 0x26AAECu, 0x26AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AAF4u;
label_26aaf4:
    // 0x26aaf4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x26aaf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26aaf8:
    // 0x26aaf8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_26aafc:
    if (ctx->pc == 0x26AAFCu) {
        ctx->pc = 0x26AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAF8u;
        // 0x26aafc: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AB00u;
        goto label_26ab00;
    }
    ctx->pc = 0x26AAF8u;
    {
        const bool branch_taken_0x26aaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAF8u;
        // 0x26aafc: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aaf8) {
            ctx->pc = 0x26AB14u;
            goto label_26ab14;
        }
    }
    ctx->pc = 0x26AB00u;
label_26ab00:
    // 0x26ab00: 0x12e0ffb7  beqz        $s7, . + 4 + (-0x49 << 2)
label_26ab04:
    if (ctx->pc == 0x26AB04u) {
        ctx->pc = 0x26AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB00u;
        // 0x26ab04: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AB08u;
        goto label_26ab08;
    }
    ctx->pc = 0x26AB00u;
    {
        const bool branch_taken_0x26ab00 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB00u;
        // 0x26ab04: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab00) {
            ctx->pc = 0x26A9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26a9e0;
        }
    }
    ctx->pc = 0x26AB08u;
label_26ab08:
    // 0x26ab08: 0x13c0ffb6  beqz        $fp, . + 4 + (-0x4A << 2)
label_26ab0c:
    if (ctx->pc == 0x26AB0Cu) {
        ctx->pc = 0x26AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB08u;
        // 0x26ab0c: 0x8c6291dc  lw          $v0, -0x6E24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AB10u;
        goto label_26ab10;
    }
    ctx->pc = 0x26AB08u;
    {
        const bool branch_taken_0x26ab08 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB08u;
        // 0x26ab0c: 0x8c6291dc  lw          $v0, -0x6E24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab08) {
            ctx->pc = 0x26A9E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26a9e4;
        }
    }
    ctx->pc = 0x26AB10u;
label_26ab10:
    // 0x26ab10: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x26ab10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26ab14:
    // 0x26ab14: 0xc083e40  jal         func_20F900
label_26ab18:
    if (ctx->pc == 0x26AB18u) {
        ctx->pc = 0x26AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB14u;
        // 0x26ab18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AB1Cu;
        goto label_26ab1c;
    }
    ctx->pc = 0x26AB14u;
    SET_GPR_U32(ctx, 31, 0x26AB1Cu);
    ctx->pc = 0x26AB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB14u;
    // 0x26ab18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F900u, 0x26AB14u, 0x26AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB1Cu;
label_26ab1c:
    // 0x26ab1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26ab1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26ab20:
    // 0x26ab20: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x26ab20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_26ab24:
    // 0x26ab24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26ab24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26ab28:
    // 0x26ab28: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x26ab28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_26ab2c:
    // 0x26ab2c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x26ab2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26ab30:
    // 0x26ab30: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x26ab30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_26ab34:
    // 0x26ab34: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x26ab34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26ab38:
    // 0x26ab38: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x26ab38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_26ab3c:
    // 0x26ab3c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x26ab3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26ab40:
    // 0x26ab40: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x26ab40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_26ab44:
    // 0x26ab44: 0x3e00008  jr          $ra
label_26ab48:
    if (ctx->pc == 0x26AB48u) {
        ctx->pc = 0x26AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB44u;
        // 0x26ab48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AB4Cu;
        goto label_26ab4c;
    }
    ctx->pc = 0x26AB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB44u;
        // 0x26ab48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AB4Cu;
label_26ab4c:
    // 0x26ab4c: 0x0  nop
    ctx->pc = 0x26ab4cu;
    // NOP
    ctx->pc = 0x26ab50u;
}
