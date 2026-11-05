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

// Function: sub_00173960
// Address: 0x173960 - 0x173a88
void sub_00173960_0x173960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173960_0x173960");
#endif

    switch (ctx->pc) {
        case 0x173960u: goto label_173960;
        case 0x173964u: goto label_173964;
        case 0x173968u: goto label_173968;
        case 0x17396cu: goto label_17396c;
        case 0x173970u: goto label_173970;
        case 0x173974u: goto label_173974;
        case 0x173978u: goto label_173978;
        case 0x17397cu: goto label_17397c;
        case 0x173980u: goto label_173980;
        case 0x173984u: goto label_173984;
        case 0x173988u: goto label_173988;
        case 0x17398cu: goto label_17398c;
        case 0x173990u: goto label_173990;
        case 0x173994u: goto label_173994;
        case 0x173998u: goto label_173998;
        case 0x17399cu: goto label_17399c;
        case 0x1739a0u: goto label_1739a0;
        case 0x1739a4u: goto label_1739a4;
        case 0x1739a8u: goto label_1739a8;
        case 0x1739acu: goto label_1739ac;
        case 0x1739b0u: goto label_1739b0;
        case 0x1739b4u: goto label_1739b4;
        case 0x1739b8u: goto label_1739b8;
        case 0x1739bcu: goto label_1739bc;
        case 0x1739c0u: goto label_1739c0;
        case 0x1739c4u: goto label_1739c4;
        case 0x1739c8u: goto label_1739c8;
        case 0x1739ccu: goto label_1739cc;
        case 0x1739d0u: goto label_1739d0;
        case 0x1739d4u: goto label_1739d4;
        case 0x1739d8u: goto label_1739d8;
        case 0x1739dcu: goto label_1739dc;
        case 0x1739e0u: goto label_1739e0;
        case 0x1739e4u: goto label_1739e4;
        case 0x1739e8u: goto label_1739e8;
        case 0x1739ecu: goto label_1739ec;
        case 0x1739f0u: goto label_1739f0;
        case 0x1739f4u: goto label_1739f4;
        case 0x1739f8u: goto label_1739f8;
        case 0x1739fcu: goto label_1739fc;
        case 0x173a00u: goto label_173a00;
        case 0x173a04u: goto label_173a04;
        case 0x173a08u: goto label_173a08;
        case 0x173a0cu: goto label_173a0c;
        case 0x173a10u: goto label_173a10;
        case 0x173a14u: goto label_173a14;
        case 0x173a18u: goto label_173a18;
        case 0x173a1cu: goto label_173a1c;
        case 0x173a20u: goto label_173a20;
        case 0x173a24u: goto label_173a24;
        case 0x173a28u: goto label_173a28;
        case 0x173a2cu: goto label_173a2c;
        case 0x173a30u: goto label_173a30;
        case 0x173a34u: goto label_173a34;
        case 0x173a38u: goto label_173a38;
        case 0x173a3cu: goto label_173a3c;
        case 0x173a40u: goto label_173a40;
        case 0x173a44u: goto label_173a44;
        case 0x173a48u: goto label_173a48;
        case 0x173a4cu: goto label_173a4c;
        case 0x173a50u: goto label_173a50;
        case 0x173a54u: goto label_173a54;
        case 0x173a58u: goto label_173a58;
        case 0x173a5cu: goto label_173a5c;
        case 0x173a60u: goto label_173a60;
        case 0x173a64u: goto label_173a64;
        case 0x173a68u: goto label_173a68;
        case 0x173a6cu: goto label_173a6c;
        case 0x173a70u: goto label_173a70;
        case 0x173a74u: goto label_173a74;
        case 0x173a78u: goto label_173a78;
        case 0x173a7cu: goto label_173a7c;
        case 0x173a80u: goto label_173a80;
        case 0x173a84u: goto label_173a84;
        default: break;
    }

    ctx->pc = 0x173960u;

label_173960:
    // 0x173960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_173964:
    // 0x173964: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_173968:
    // 0x173968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17396c:
    // 0x17396c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17396cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173970:
    // 0x173970: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x173970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_173974:
    // 0x173974: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x173974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_173978:
    // 0x173978: 0x10a0003b  beqz        $a1, . + 4 + (0x3B << 2)
label_17397c:
    if (ctx->pc == 0x17397Cu) {
        ctx->pc = 0x17397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173978u;
        // 0x17397c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173980u;
        goto label_173980;
    }
    ctx->pc = 0x173978u;
    {
        const bool branch_taken_0x173978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173978u;
        // 0x17397c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173978) {
            ctx->pc = 0x173A68u;
            goto label_173a68;
        }
    }
    ctx->pc = 0x173980u;
label_173980:
    // 0x173980: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x173980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_173984:
    // 0x173984: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x173984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_173988:
    // 0x173988: 0x24729a08  addiu       $s2, $v1, -0x65F8
    ctx->pc = 0x173988u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
label_17398c:
    // 0x17398c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17398cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_173990:
    // 0x173990: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x173990u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_173994:
    // 0x173994: 0x52000035  beql        $s0, $zero, . + 4 + (0x35 << 2)
label_173998:
    if (ctx->pc == 0x173998u) {
        ctx->pc = 0x173998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173994u;
        // 0x173998: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17399Cu;
        goto label_17399c;
    }
    ctx->pc = 0x173994u;
    {
        const bool branch_taken_0x173994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x173994) {
            ctx->pc = 0x173998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173994u;
            // 0x173998: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173A6Cu;
            goto label_173a6c;
        }
    }
    ctx->pc = 0x17399Cu;
label_17399c:
    // 0x17399c: 0xc04393c  jal         func_10E4F0
label_1739a0:
    if (ctx->pc == 0x1739A0u) {
        ctx->pc = 0x1739A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17399Cu;
        // 0x1739a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1739A4u;
        goto label_1739a4;
    }
    ctx->pc = 0x17399Cu;
    SET_GPR_U32(ctx, 31, 0x1739A4u);
    ctx->pc = 0x1739A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17399Cu;
    // 0x1739a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x17399Cu, 0x1739A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1739A4u;
label_1739a4:
    // 0x1739a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1739a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1739a8:
    // 0x1739a8: 0x52600030  beql        $s3, $zero, . + 4 + (0x30 << 2)
label_1739ac:
    if (ctx->pc == 0x1739ACu) {
        ctx->pc = 0x1739ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739A8u;
        // 0x1739ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1739B0u;
        goto label_1739b0;
    }
    ctx->pc = 0x1739A8u;
    {
        const bool branch_taken_0x1739a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1739a8) {
            ctx->pc = 0x1739ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1739A8u;
            // 0x1739ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173A6Cu;
            goto label_173a6c;
        }
    }
    ctx->pc = 0x1739B0u;
label_1739b0:
    // 0x1739b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1739b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1739b4:
    // 0x1739b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1739b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1739b8:
    // 0x1739b8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1739b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1739bc:
    // 0x1739bc: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1739bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_1739c0:
    // 0x1739c0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1739c4:
    if (ctx->pc == 0x1739C4u) {
        ctx->pc = 0x1739C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739C0u;
        // 0x1739c4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1739C8u;
        goto label_1739c8;
    }
    ctx->pc = 0x1739C0u;
    {
        const bool branch_taken_0x1739c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1739c0) {
            ctx->pc = 0x1739C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1739C0u;
            // 0x1739c4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1739D0u;
            goto label_1739d0;
        }
    }
    ctx->pc = 0x1739C8u;
label_1739c8:
    // 0x1739c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1739cc:
    if (ctx->pc == 0x1739CCu) {
        ctx->pc = 0x1739CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739C8u;
        // 0x1739cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1739D0u;
        goto label_1739d0;
    }
    ctx->pc = 0x1739C8u;
    {
        const bool branch_taken_0x1739c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1739CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739C8u;
        // 0x1739cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1739c8) {
            ctx->pc = 0x1739D8u;
            goto label_1739d8;
        }
    }
    ctx->pc = 0x1739D0u;
label_1739d0:
    // 0x1739d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1739d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1739d4:
    // 0x1739d4: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x1739d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1739d8:
    // 0x1739d8: 0x12400024  beqz        $s2, . + 4 + (0x24 << 2)
label_1739dc:
    if (ctx->pc == 0x1739DCu) {
        ctx->pc = 0x1739DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739D8u;
        // 0x1739dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1739E0u;
        goto label_1739e0;
    }
    ctx->pc = 0x1739D8u;
    {
        const bool branch_taken_0x1739d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1739DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739D8u;
        // 0x1739dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1739d8) {
            ctx->pc = 0x173A6Cu;
            goto label_173a6c;
        }
    }
    ctx->pc = 0x1739E0u;
label_1739e0:
    // 0x1739e0: 0xc04f9a4  jal         func_13E690
label_1739e4:
    if (ctx->pc == 0x1739E4u) {
        ctx->pc = 0x1739E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739E0u;
        // 0x1739e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1739E8u;
        goto label_1739e8;
    }
    ctx->pc = 0x1739E0u;
    SET_GPR_U32(ctx, 31, 0x1739E8u);
    ctx->pc = 0x1739E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1739E0u;
    // 0x1739e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x1739E0u, 0x1739E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1739E8u;
label_1739e8:
    // 0x1739e8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1739e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1739ec:
    // 0x1739ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1739ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1739f0:
    // 0x1739f0: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x1739f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_1739f4:
    // 0x1739f4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1739f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1739f8:
    // 0x1739f8: 0xc04f8fc  jal         func_13E3F0
label_1739fc:
    if (ctx->pc == 0x1739FCu) {
        ctx->pc = 0x1739FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739F8u;
        // 0x1739fc: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A00u;
        goto label_173a00;
    }
    ctx->pc = 0x1739F8u;
    SET_GPR_U32(ctx, 31, 0x173A00u);
    ctx->pc = 0x1739FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1739F8u;
    // 0x1739fc: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x1739F8u, 0x173A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A00u;
label_173a00:
    // 0x173a00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x173a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173a04:
    // 0x173a04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x173a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_173a08:
    // 0x173a08: 0xc045fea  jal         func_117FA8
label_173a0c:
    if (ctx->pc == 0x173A0Cu) {
        ctx->pc = 0x173A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A08u;
        // 0x173a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A10u;
        goto label_173a10;
    }
    ctx->pc = 0x173A08u;
    SET_GPR_U32(ctx, 31, 0x173A10u);
    ctx->pc = 0x173A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A08u;
    // 0x173a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x173A08u, 0x173A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A10u;
label_173a10:
    // 0x173a10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x173a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_173a14:
    // 0x173a14: 0xc046058  jal         func_118160
label_173a18:
    if (ctx->pc == 0x173A18u) {
        ctx->pc = 0x173A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A14u;
        // 0x173a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A1Cu;
        goto label_173a1c;
    }
    ctx->pc = 0x173A14u;
    SET_GPR_U32(ctx, 31, 0x173A1Cu);
    ctx->pc = 0x173A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A14u;
    // 0x173a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x173A14u, 0x173A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A1Cu;
label_173a1c:
    // 0x173a1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173a20:
    // 0x173a20: 0xc046104  jal         func_118410
label_173a24:
    if (ctx->pc == 0x173A24u) {
        ctx->pc = 0x173A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A20u;
        // 0x173a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A28u;
        goto label_173a28;
    }
    ctx->pc = 0x173A20u;
    SET_GPR_U32(ctx, 31, 0x173A28u);
    ctx->pc = 0x173A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A20u;
    // 0x173a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x173A20u, 0x173A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A28u;
label_173a28:
    // 0x173a28: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x173a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_173a2c:
    // 0x173a2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x173a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_173a30:
    // 0x173a30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x173a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_173a34:
    // 0x173a34: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x173a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_173a38:
    // 0x173a38: 0xc046290  jal         func_118A40
label_173a3c:
    if (ctx->pc == 0x173A3Cu) {
        ctx->pc = 0x173A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A38u;
        // 0x173a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A40u;
        goto label_173a40;
    }
    ctx->pc = 0x173A38u;
    SET_GPR_U32(ctx, 31, 0x173A40u);
    ctx->pc = 0x173A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A38u;
    // 0x173a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x173A38u, 0x173A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A40u;
label_173a40:
    // 0x173a40: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x173a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_173a44:
    // 0x173a44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173a48:
    // 0x173a48: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x173a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_173a4c:
    // 0x173a4c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x173a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_173a50:
    // 0x173a50: 0x40f809  jalr        $v0
label_173a54:
    if (ctx->pc == 0x173A54u) {
        ctx->pc = 0x173A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A50u;
        // 0x173a54: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A58u;
        goto label_173a58;
    }
    ctx->pc = 0x173A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173A58u);
        ctx->pc = 0x173A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A50u;
        // 0x173a54: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173A50u, 0x173A58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173A58u;
label_173a58:
    // 0x173a58: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x173a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_173a5c:
    // 0x173a5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173a60:
    // 0x173a60: 0xac620334  sw          $v0, 0x334($v1)
    ctx->pc = 0x173a60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 2));
label_173a64:
    // 0x173a64: 0xae200250  sw          $zero, 0x250($s1)
    ctx->pc = 0x173a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 0));
label_173a68:
    // 0x173a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173a6c:
    // 0x173a6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_173a70:
    // 0x173a70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x173a70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_173a74:
    // 0x173a74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x173a74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_173a78:
    // 0x173a78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_173a7c:
    // 0x173a7c: 0x3e00008  jr          $ra
label_173a80:
    if (ctx->pc == 0x173A80u) {
        ctx->pc = 0x173A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A7Cu;
        // 0x173a80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A84u;
        goto label_173a84;
    }
    ctx->pc = 0x173A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A7Cu;
        // 0x173a80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173A84u;
label_173a84:
    // 0x173a84: 0x0  nop
    ctx->pc = 0x173a84u;
    // NOP
    ctx->pc = 0x173a88u;
}
