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

// Function: sub_0016DDD0
// Address: 0x16ddd0 - 0x16df38
void sub_0016DDD0_0x16ddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DDD0_0x16ddd0");
#endif

    switch (ctx->pc) {
        case 0x16ddd0u: goto label_16ddd0;
        case 0x16ddd4u: goto label_16ddd4;
        case 0x16ddd8u: goto label_16ddd8;
        case 0x16dddcu: goto label_16dddc;
        case 0x16dde0u: goto label_16dde0;
        case 0x16dde4u: goto label_16dde4;
        case 0x16dde8u: goto label_16dde8;
        case 0x16ddecu: goto label_16ddec;
        case 0x16ddf0u: goto label_16ddf0;
        case 0x16ddf4u: goto label_16ddf4;
        case 0x16ddf8u: goto label_16ddf8;
        case 0x16ddfcu: goto label_16ddfc;
        case 0x16de00u: goto label_16de00;
        case 0x16de04u: goto label_16de04;
        case 0x16de08u: goto label_16de08;
        case 0x16de0cu: goto label_16de0c;
        case 0x16de10u: goto label_16de10;
        case 0x16de14u: goto label_16de14;
        case 0x16de18u: goto label_16de18;
        case 0x16de1cu: goto label_16de1c;
        case 0x16de20u: goto label_16de20;
        case 0x16de24u: goto label_16de24;
        case 0x16de28u: goto label_16de28;
        case 0x16de2cu: goto label_16de2c;
        case 0x16de30u: goto label_16de30;
        case 0x16de34u: goto label_16de34;
        case 0x16de38u: goto label_16de38;
        case 0x16de3cu: goto label_16de3c;
        case 0x16de40u: goto label_16de40;
        case 0x16de44u: goto label_16de44;
        case 0x16de48u: goto label_16de48;
        case 0x16de4cu: goto label_16de4c;
        case 0x16de50u: goto label_16de50;
        case 0x16de54u: goto label_16de54;
        case 0x16de58u: goto label_16de58;
        case 0x16de5cu: goto label_16de5c;
        case 0x16de60u: goto label_16de60;
        case 0x16de64u: goto label_16de64;
        case 0x16de68u: goto label_16de68;
        case 0x16de6cu: goto label_16de6c;
        case 0x16de70u: goto label_16de70;
        case 0x16de74u: goto label_16de74;
        case 0x16de78u: goto label_16de78;
        case 0x16de7cu: goto label_16de7c;
        case 0x16de80u: goto label_16de80;
        case 0x16de84u: goto label_16de84;
        case 0x16de88u: goto label_16de88;
        case 0x16de8cu: goto label_16de8c;
        case 0x16de90u: goto label_16de90;
        case 0x16de94u: goto label_16de94;
        case 0x16de98u: goto label_16de98;
        case 0x16de9cu: goto label_16de9c;
        case 0x16dea0u: goto label_16dea0;
        case 0x16dea4u: goto label_16dea4;
        case 0x16dea8u: goto label_16dea8;
        case 0x16deacu: goto label_16deac;
        case 0x16deb0u: goto label_16deb0;
        case 0x16deb4u: goto label_16deb4;
        case 0x16deb8u: goto label_16deb8;
        case 0x16debcu: goto label_16debc;
        case 0x16dec0u: goto label_16dec0;
        case 0x16dec4u: goto label_16dec4;
        case 0x16dec8u: goto label_16dec8;
        case 0x16deccu: goto label_16decc;
        case 0x16ded0u: goto label_16ded0;
        case 0x16ded4u: goto label_16ded4;
        case 0x16ded8u: goto label_16ded8;
        case 0x16dedcu: goto label_16dedc;
        case 0x16dee0u: goto label_16dee0;
        case 0x16dee4u: goto label_16dee4;
        case 0x16dee8u: goto label_16dee8;
        case 0x16deecu: goto label_16deec;
        case 0x16def0u: goto label_16def0;
        case 0x16def4u: goto label_16def4;
        case 0x16def8u: goto label_16def8;
        case 0x16defcu: goto label_16defc;
        case 0x16df00u: goto label_16df00;
        case 0x16df04u: goto label_16df04;
        case 0x16df08u: goto label_16df08;
        case 0x16df0cu: goto label_16df0c;
        case 0x16df10u: goto label_16df10;
        case 0x16df14u: goto label_16df14;
        case 0x16df18u: goto label_16df18;
        case 0x16df1cu: goto label_16df1c;
        case 0x16df20u: goto label_16df20;
        case 0x16df24u: goto label_16df24;
        case 0x16df28u: goto label_16df28;
        case 0x16df2cu: goto label_16df2c;
        case 0x16df30u: goto label_16df30;
        case 0x16df34u: goto label_16df34;
        default: break;
    }

    ctx->pc = 0x16ddd0u;

label_16ddd0:
    // 0x16ddd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16ddd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16ddd4:
    // 0x16ddd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ddd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16ddd8:
    // 0x16ddd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16dddc:
    // 0x16dddc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16dddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16dde0:
    // 0x16dde0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16dde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16dde4:
    // 0x16dde4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16dde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_16dde8:
    // 0x16dde8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16dde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_16ddec:
    // 0x16ddec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16ddecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_16ddf0:
    // 0x16ddf0: 0xc05a618  jal         func_169860
label_16ddf4:
    if (ctx->pc == 0x16DDF4u) {
        ctx->pc = 0x16DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDF0u;
        // 0x16ddf4: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DDF8u;
        goto label_16ddf8;
    }
    ctx->pc = 0x16DDF0u;
    SET_GPR_U32(ctx, 31, 0x16DDF8u);
    ctx->pc = 0x16DDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DDF0u;
    // 0x16ddf4: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16DDF0u, 0x16DDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DDF8u;
label_16ddf8:
    // 0x16ddf8: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_16ddfc:
    if (ctx->pc == 0x16DDFCu) {
        ctx->pc = 0x16DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDF8u;
        // 0x16ddfc: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE00u;
        goto label_16de00;
    }
    ctx->pc = 0x16DDF8u;
    {
        const bool branch_taken_0x16ddf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDF8u;
        // 0x16ddfc: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ddf8) {
            ctx->pc = 0x16DF10u;
            goto label_16df10;
        }
    }
    ctx->pc = 0x16DE00u;
label_16de00:
    // 0x16de00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16de00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16de04:
    // 0x16de04: 0x24729a08  addiu       $s2, $v1, -0x65F8
    ctx->pc = 0x16de04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
label_16de08:
    // 0x16de08: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_16de0c:
    // 0x16de0c: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x16de0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_16de10:
    // 0x16de10: 0x1200003f  beqz        $s0, . + 4 + (0x3F << 2)
label_16de14:
    if (ctx->pc == 0x16DE14u) {
        ctx->pc = 0x16DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE10u;
        // 0x16de14: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE18u;
        goto label_16de18;
    }
    ctx->pc = 0x16DE10u;
    {
        const bool branch_taken_0x16de10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE10u;
        // 0x16de14: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de10) {
            ctx->pc = 0x16DF10u;
            goto label_16df10;
        }
    }
    ctx->pc = 0x16DE18u;
label_16de18:
    // 0x16de18: 0xc04393c  jal         func_10E4F0
label_16de1c:
    if (ctx->pc == 0x16DE1Cu) {
        ctx->pc = 0x16DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE18u;
        // 0x16de1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE20u;
        goto label_16de20;
    }
    ctx->pc = 0x16DE18u;
    SET_GPR_U32(ctx, 31, 0x16DE20u);
    ctx->pc = 0x16DE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DE18u;
    // 0x16de1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x16DE18u, 0x16DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE20u;
label_16de20:
    // 0x16de20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16de20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16de24:
    // 0x16de24: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16de24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16de28:
    // 0x16de28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16de28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16de2c:
    // 0x16de2c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_16de30:
    // 0x16de30: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x16de30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_16de34:
    // 0x16de34: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_16de38:
    if (ctx->pc == 0x16DE38u) {
        ctx->pc = 0x16DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE34u;
        // 0x16de38: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE3Cu;
        goto label_16de3c;
    }
    ctx->pc = 0x16DE34u;
    {
        const bool branch_taken_0x16de34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16de34) {
            ctx->pc = 0x16DE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DE34u;
            // 0x16de38: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DE44u;
            goto label_16de44;
        }
    }
    ctx->pc = 0x16DE3Cu;
label_16de3c:
    // 0x16de3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_16de40:
    if (ctx->pc == 0x16DE40u) {
        ctx->pc = 0x16DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE3Cu;
        // 0x16de40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE44u;
        goto label_16de44;
    }
    ctx->pc = 0x16DE3Cu;
    {
        const bool branch_taken_0x16de3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE3Cu;
        // 0x16de40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de3c) {
            ctx->pc = 0x16DE4Cu;
            goto label_16de4c;
        }
    }
    ctx->pc = 0x16DE44u;
label_16de44:
    // 0x16de44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16de44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16de48:
    // 0x16de48: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x16de48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_16de4c:
    // 0x16de4c: 0xc05a5fe  jal         func_1697F8
label_16de50:
    if (ctx->pc == 0x16DE50u) {
        ctx->pc = 0x16DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE4Cu;
        // 0x16de50: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE54u;
        goto label_16de54;
    }
    ctx->pc = 0x16DE4Cu;
    SET_GPR_U32(ctx, 31, 0x16DE54u);
    ctx->pc = 0x16DE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DE4Cu;
    // 0x16de50: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16DE4Cu, 0x16DE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE54u;
label_16de54:
    // 0x16de54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16de54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16de58:
    // 0x16de58: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_16de5c:
    if (ctx->pc == 0x16DE5Cu) {
        ctx->pc = 0x16DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE58u;
        // 0x16de5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE60u;
        goto label_16de60;
    }
    ctx->pc = 0x16DE58u;
    {
        const bool branch_taken_0x16de58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE58u;
        // 0x16de5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de58) {
            ctx->pc = 0x16DF14u;
            goto label_16df14;
        }
    }
    ctx->pc = 0x16DE60u;
label_16de60:
    // 0x16de60: 0x26829a08  addiu       $v0, $s4, -0x65F8
    ctx->pc = 0x16de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941192));
label_16de64:
    // 0x16de64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16de64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16de68:
    // 0x16de68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16de6c:
    // 0x16de6c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x16de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_16de70:
    // 0x16de70: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
label_16de74:
    if (ctx->pc == 0x16DE74u) {
        ctx->pc = 0x16DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE70u;
        // 0x16de74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE78u;
        goto label_16de78;
    }
    ctx->pc = 0x16DE70u;
    {
        const bool branch_taken_0x16de70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE70u;
        // 0x16de74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de70) {
            ctx->pc = 0x16DF14u;
            goto label_16df14;
        }
    }
    ctx->pc = 0x16DE78u;
label_16de78:
    // 0x16de78: 0xc04393c  jal         func_10E4F0
label_16de7c:
    if (ctx->pc == 0x16DE7Cu) {
        ctx->pc = 0x16DE80u;
        goto label_16de80;
    }
    ctx->pc = 0x16DE78u;
    SET_GPR_U32(ctx, 31, 0x16DE80u);
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x16DE78u, 0x16DE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE80u;
label_16de80:
    // 0x16de80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16de80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16de84:
    // 0x16de84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16de84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16de88:
    // 0x16de88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16de88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16de8c:
    // 0x16de8c: 0xc040db6  jal         func_1036D8
label_16de90:
    if (ctx->pc == 0x16DE90u) {
        ctx->pc = 0x16DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE8Cu;
        // 0x16de90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE94u;
        goto label_16de94;
    }
    ctx->pc = 0x16DE8Cu;
    SET_GPR_U32(ctx, 31, 0x16DE94u);
    ctx->pc = 0x16DE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DE8Cu;
    // 0x16de90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1036D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1036D8u, 0x16DE8Cu, 0x16DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE94u;
label_16de94:
    // 0x16de94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16de94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16de98:
    // 0x16de98: 0x5240001e  beql        $s2, $zero, . + 4 + (0x1E << 2)
label_16de9c:
    if (ctx->pc == 0x16DE9Cu) {
        ctx->pc = 0x16DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE98u;
        // 0x16de9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DEA0u;
        goto label_16dea0;
    }
    ctx->pc = 0x16DE98u;
    {
        const bool branch_taken_0x16de98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16de98) {
            ctx->pc = 0x16DE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DE98u;
            // 0x16de9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DF14u;
            goto label_16df14;
        }
    }
    ctx->pc = 0x16DEA0u;
label_16dea0:
    // 0x16dea0: 0xc04f9a4  jal         func_13E690
label_16dea4:
    if (ctx->pc == 0x16DEA4u) {
        ctx->pc = 0x16DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEA0u;
        // 0x16dea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DEA8u;
        goto label_16dea8;
    }
    ctx->pc = 0x16DEA0u;
    SET_GPR_U32(ctx, 31, 0x16DEA8u);
    ctx->pc = 0x16DEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DEA0u;
    // 0x16dea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x16DEA0u, 0x16DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DEA8u;
label_16dea8:
    // 0x16dea8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16deac:
    // 0x16deac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16deacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16deb0:
    // 0x16deb0: 0xae2300f4  sw          $v1, 0xF4($s1)
    ctx->pc = 0x16deb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
label_16deb4:
    // 0x16deb4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x16deb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_16deb8:
    // 0x16deb8: 0xc04f8fc  jal         func_13E3F0
label_16debc:
    if (ctx->pc == 0x16DEBCu) {
        ctx->pc = 0x16DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEB8u;
        // 0x16debc: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DEC0u;
        goto label_16dec0;
    }
    ctx->pc = 0x16DEB8u;
    SET_GPR_U32(ctx, 31, 0x16DEC0u);
    ctx->pc = 0x16DEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DEB8u;
    // 0x16debc: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x16DEB8u, 0x16DEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DEC0u;
label_16dec0:
    // 0x16dec0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16dec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16dec4:
    // 0x16dec4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16dec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16dec8:
    // 0x16dec8: 0xc045fea  jal         func_117FA8
label_16decc:
    if (ctx->pc == 0x16DECCu) {
        ctx->pc = 0x16DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEC8u;
        // 0x16decc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DED0u;
        goto label_16ded0;
    }
    ctx->pc = 0x16DEC8u;
    SET_GPR_U32(ctx, 31, 0x16DED0u);
    ctx->pc = 0x16DECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DEC8u;
    // 0x16decc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x16DEC8u, 0x16DED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DED0u;
label_16ded0:
    // 0x16ded0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ded0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ded4:
    // 0x16ded4: 0xc046104  jal         func_118410
label_16ded8:
    if (ctx->pc == 0x16DED8u) {
        ctx->pc = 0x16DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DED4u;
        // 0x16ded8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DEDCu;
        goto label_16dedc;
    }
    ctx->pc = 0x16DED4u;
    SET_GPR_U32(ctx, 31, 0x16DEDCu);
    ctx->pc = 0x16DED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DED4u;
    // 0x16ded8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x16DED4u, 0x16DEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DEDCu;
label_16dedc:
    // 0x16dedc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x16dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_16dee0:
    // 0x16dee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16dee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16dee4:
    // 0x16dee4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_16dee8:
    // 0x16dee8: 0xc046190  jal         func_118640
label_16deec:
    if (ctx->pc == 0x16DEECu) {
        ctx->pc = 0x16DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEE8u;
        // 0x16deec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DEF0u;
        goto label_16def0;
    }
    ctx->pc = 0x16DEE8u;
    SET_GPR_U32(ctx, 31, 0x16DEF0u);
    ctx->pc = 0x16DEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DEE8u;
    // 0x16deec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x16DEE8u, 0x16DEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DEF0u;
label_16def0:
    // 0x16def0: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x16def0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_16def4:
    // 0x16def4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16def4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16def8:
    // 0x16def8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16def8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16defc:
    // 0x16defc: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x16defcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_16df00:
    // 0x16df00: 0x40f809  jalr        $v0
label_16df04:
    if (ctx->pc == 0x16DF04u) {
        ctx->pc = 0x16DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF00u;
        // 0x16df04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF08u;
        goto label_16df08;
    }
    ctx->pc = 0x16DF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16DF08u);
        ctx->pc = 0x16DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF00u;
        // 0x16df04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DF00u, 0x16DF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DF08u;
label_16df08:
    // 0x16df08: 0x10000002  b           . + 4 + (0x2 << 2)
label_16df0c:
    if (ctx->pc == 0x16DF0Cu) {
        ctx->pc = 0x16DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF08u;
        // 0x16df0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF10u;
        goto label_16df10;
    }
    ctx->pc = 0x16DF08u;
    {
        const bool branch_taken_0x16df08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF08u;
        // 0x16df0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df08) {
            ctx->pc = 0x16DF14u;
            goto label_16df14;
        }
    }
    ctx->pc = 0x16DF10u;
label_16df10:
    // 0x16df10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16df10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16df14:
    // 0x16df14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16df14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16df18:
    // 0x16df18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16df18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16df1c:
    // 0x16df1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16df1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16df20:
    // 0x16df20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16df20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16df24:
    // 0x16df24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16df24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16df28:
    // 0x16df28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16df28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16df2c:
    // 0x16df2c: 0x3e00008  jr          $ra
label_16df30:
    if (ctx->pc == 0x16DF30u) {
        ctx->pc = 0x16DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF2Cu;
        // 0x16df30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF34u;
        goto label_16df34;
    }
    ctx->pc = 0x16DF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF2Cu;
        // 0x16df30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DF34u;
label_16df34:
    // 0x16df34: 0x0  nop
    ctx->pc = 0x16df34u;
    // NOP
    ctx->pc = 0x16df38u;
}
