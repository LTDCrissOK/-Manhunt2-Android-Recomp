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

// Function: sub_0015D000
// Address: 0x15d000 - 0x15d1d8
void sub_0015D000_0x15d000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D000_0x15d000");
#endif

    switch (ctx->pc) {
        case 0x15d000u: goto label_15d000;
        case 0x15d004u: goto label_15d004;
        case 0x15d008u: goto label_15d008;
        case 0x15d00cu: goto label_15d00c;
        case 0x15d010u: goto label_15d010;
        case 0x15d014u: goto label_15d014;
        case 0x15d018u: goto label_15d018;
        case 0x15d01cu: goto label_15d01c;
        case 0x15d020u: goto label_15d020;
        case 0x15d024u: goto label_15d024;
        case 0x15d028u: goto label_15d028;
        case 0x15d02cu: goto label_15d02c;
        case 0x15d030u: goto label_15d030;
        case 0x15d034u: goto label_15d034;
        case 0x15d038u: goto label_15d038;
        case 0x15d03cu: goto label_15d03c;
        case 0x15d040u: goto label_15d040;
        case 0x15d044u: goto label_15d044;
        case 0x15d048u: goto label_15d048;
        case 0x15d04cu: goto label_15d04c;
        case 0x15d050u: goto label_15d050;
        case 0x15d054u: goto label_15d054;
        case 0x15d058u: goto label_15d058;
        case 0x15d05cu: goto label_15d05c;
        case 0x15d060u: goto label_15d060;
        case 0x15d064u: goto label_15d064;
        case 0x15d068u: goto label_15d068;
        case 0x15d06cu: goto label_15d06c;
        case 0x15d070u: goto label_15d070;
        case 0x15d074u: goto label_15d074;
        case 0x15d078u: goto label_15d078;
        case 0x15d07cu: goto label_15d07c;
        case 0x15d080u: goto label_15d080;
        case 0x15d084u: goto label_15d084;
        case 0x15d088u: goto label_15d088;
        case 0x15d08cu: goto label_15d08c;
        case 0x15d090u: goto label_15d090;
        case 0x15d094u: goto label_15d094;
        case 0x15d098u: goto label_15d098;
        case 0x15d09cu: goto label_15d09c;
        case 0x15d0a0u: goto label_15d0a0;
        case 0x15d0a4u: goto label_15d0a4;
        case 0x15d0a8u: goto label_15d0a8;
        case 0x15d0acu: goto label_15d0ac;
        case 0x15d0b0u: goto label_15d0b0;
        case 0x15d0b4u: goto label_15d0b4;
        case 0x15d0b8u: goto label_15d0b8;
        case 0x15d0bcu: goto label_15d0bc;
        case 0x15d0c0u: goto label_15d0c0;
        case 0x15d0c4u: goto label_15d0c4;
        case 0x15d0c8u: goto label_15d0c8;
        case 0x15d0ccu: goto label_15d0cc;
        case 0x15d0d0u: goto label_15d0d0;
        case 0x15d0d4u: goto label_15d0d4;
        case 0x15d0d8u: goto label_15d0d8;
        case 0x15d0dcu: goto label_15d0dc;
        case 0x15d0e0u: goto label_15d0e0;
        case 0x15d0e4u: goto label_15d0e4;
        case 0x15d0e8u: goto label_15d0e8;
        case 0x15d0ecu: goto label_15d0ec;
        case 0x15d0f0u: goto label_15d0f0;
        case 0x15d0f4u: goto label_15d0f4;
        case 0x15d0f8u: goto label_15d0f8;
        case 0x15d0fcu: goto label_15d0fc;
        case 0x15d100u: goto label_15d100;
        case 0x15d104u: goto label_15d104;
        case 0x15d108u: goto label_15d108;
        case 0x15d10cu: goto label_15d10c;
        case 0x15d110u: goto label_15d110;
        case 0x15d114u: goto label_15d114;
        case 0x15d118u: goto label_15d118;
        case 0x15d11cu: goto label_15d11c;
        case 0x15d120u: goto label_15d120;
        case 0x15d124u: goto label_15d124;
        case 0x15d128u: goto label_15d128;
        case 0x15d12cu: goto label_15d12c;
        case 0x15d130u: goto label_15d130;
        case 0x15d134u: goto label_15d134;
        case 0x15d138u: goto label_15d138;
        case 0x15d13cu: goto label_15d13c;
        case 0x15d140u: goto label_15d140;
        case 0x15d144u: goto label_15d144;
        case 0x15d148u: goto label_15d148;
        case 0x15d14cu: goto label_15d14c;
        case 0x15d150u: goto label_15d150;
        case 0x15d154u: goto label_15d154;
        case 0x15d158u: goto label_15d158;
        case 0x15d15cu: goto label_15d15c;
        case 0x15d160u: goto label_15d160;
        case 0x15d164u: goto label_15d164;
        case 0x15d168u: goto label_15d168;
        case 0x15d16cu: goto label_15d16c;
        case 0x15d170u: goto label_15d170;
        case 0x15d174u: goto label_15d174;
        case 0x15d178u: goto label_15d178;
        case 0x15d17cu: goto label_15d17c;
        case 0x15d180u: goto label_15d180;
        case 0x15d184u: goto label_15d184;
        case 0x15d188u: goto label_15d188;
        case 0x15d18cu: goto label_15d18c;
        case 0x15d190u: goto label_15d190;
        case 0x15d194u: goto label_15d194;
        case 0x15d198u: goto label_15d198;
        case 0x15d19cu: goto label_15d19c;
        case 0x15d1a0u: goto label_15d1a0;
        case 0x15d1a4u: goto label_15d1a4;
        case 0x15d1a8u: goto label_15d1a8;
        case 0x15d1acu: goto label_15d1ac;
        case 0x15d1b0u: goto label_15d1b0;
        case 0x15d1b4u: goto label_15d1b4;
        case 0x15d1b8u: goto label_15d1b8;
        case 0x15d1bcu: goto label_15d1bc;
        case 0x15d1c0u: goto label_15d1c0;
        case 0x15d1c4u: goto label_15d1c4;
        case 0x15d1c8u: goto label_15d1c8;
        case 0x15d1ccu: goto label_15d1cc;
        case 0x15d1d0u: goto label_15d1d0;
        case 0x15d1d4u: goto label_15d1d4;
        default: break;
    }

    ctx->pc = 0x15d000u;

label_15d000:
    // 0x15d000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15d000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_15d004:
    // 0x15d004: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x15d004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_15d008:
    // 0x15d008: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x15d008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_15d00c:
    // 0x15d00c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x15d00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_15d010:
    // 0x15d010: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15d010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d014:
    // 0x15d014: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x15d014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_15d018:
    // 0x15d018: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x15d018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_15d01c:
    // 0x15d01c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x15d01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_15d020:
    // 0x15d020: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x15d020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_15d024:
    // 0x15d024: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x15d024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_15d028:
    // 0x15d028: 0x8e6202f8  lw          $v0, 0x2F8($s3)
    ctx->pc = 0x15d028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 760)));
label_15d02c:
    // 0x15d02c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_15d030:
    if (ctx->pc == 0x15D030u) {
        ctx->pc = 0x15D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D02Cu;
        // 0x15d030: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D034u;
        goto label_15d034;
    }
    ctx->pc = 0x15D02Cu;
    {
        const bool branch_taken_0x15d02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D02Cu;
        // 0x15d030: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d02c) {
            ctx->pc = 0x15D050u;
            goto label_15d050;
        }
    }
    ctx->pc = 0x15D034u;
label_15d034:
    // 0x15d034: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15d038:
    // 0x15d038: 0x2029018  mult        $s2, $s0, $v0
    ctx->pc = 0x15d038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_15d03c:
    // 0x15d03c: 0x272a021  addu        $s4, $s3, $s2
    ctx->pc = 0x15d03cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_15d040:
    // 0x15d040: 0x8e960360  lw          $s6, 0x360($s4)
    ctx->pc = 0x15d040u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 864)));
label_15d044:
    // 0x15d044: 0x56c00009  bnel        $s6, $zero, . + 4 + (0x9 << 2)
label_15d048:
    if (ctx->pc == 0x15D048u) {
        ctx->pc = 0x15D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D044u;
        // 0x15d048: 0x8e620214  lw          $v0, 0x214($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D04Cu;
        goto label_15d04c;
    }
    ctx->pc = 0x15D044u;
    {
        const bool branch_taken_0x15d044 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d044) {
            ctx->pc = 0x15D048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D044u;
            // 0x15d048: 0x8e620214  lw          $v0, 0x214($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D06Cu;
            goto label_15d06c;
        }
    }
    ctx->pc = 0x15D04Cu;
label_15d04c:
    // 0x15d04c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15d04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15d050:
    // 0x15d050: 0xc0573dc  jal         func_15CF70
label_15d054:
    if (ctx->pc == 0x15D054u) {
        ctx->pc = 0x15D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D050u;
        // 0x15d054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D058u;
        goto label_15d058;
    }
    ctx->pc = 0x15D050u;
    SET_GPR_U32(ctx, 31, 0x15D058u);
    ctx->pc = 0x15D054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D050u;
    // 0x15d054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF70u, 0x15D050u, 0x15D058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D058u;
label_15d058:
    // 0x15d058: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15d058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15d05c:
    // 0x15d05c: 0xc0571c6  jal         func_15C718
label_15d060:
    if (ctx->pc == 0x15D060u) {
        ctx->pc = 0x15D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D05Cu;
        // 0x15d060: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D064u;
        goto label_15d064;
    }
    ctx->pc = 0x15D05Cu;
    SET_GPR_U32(ctx, 31, 0x15D064u);
    ctx->pc = 0x15D060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D05Cu;
    // 0x15d060: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C718u, 0x15D05Cu, 0x15D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D064u;
label_15d064:
    // 0x15d064: 0x10000053  b           . + 4 + (0x53 << 2)
label_15d068:
    if (ctx->pc == 0x15D068u) {
        ctx->pc = 0x15D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D064u;
        // 0x15d068: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D06Cu;
        goto label_15d06c;
    }
    ctx->pc = 0x15D064u;
    {
        const bool branch_taken_0x15d064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D064u;
        // 0x15d068: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d064) {
            ctx->pc = 0x15D1B4u;
            goto label_15d1b4;
        }
    }
    ctx->pc = 0x15D06Cu;
label_15d06c:
    // 0x15d06c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_15d070:
    // 0x15d070: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x15d070u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
label_15d074:
    // 0x15d074: 0x8e860320  lw          $a2, 0x320($s4)
    ctx->pc = 0x15d074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_15d078:
    // 0x15d078: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x15d078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_15d07c:
    // 0x15d07c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x15d07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
label_15d080:
    // 0x15d080: 0xc04ae84  jal         func_12BA10
label_15d084:
    if (ctx->pc == 0x15D084u) {
        ctx->pc = 0x15D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D080u;
        // 0x15d084: 0x24e78738  addiu       $a3, $a3, -0x78C8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D088u;
        goto label_15d088;
    }
    ctx->pc = 0x15D080u;
    SET_GPR_U32(ctx, 31, 0x15D088u);
    ctx->pc = 0x15D084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D080u;
    // 0x15d084: 0x24e78738  addiu       $a3, $a3, -0x78C8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x15D080u, 0x15D088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D088u;
label_15d088:
    // 0x15d088: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15d088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d08c:
    // 0x15d08c: 0x12200048  beqz        $s1, . + 4 + (0x48 << 2)
label_15d090:
    if (ctx->pc == 0x15D090u) {
        ctx->pc = 0x15D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D08Cu;
        // 0x15d090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D094u;
        goto label_15d094;
    }
    ctx->pc = 0x15D08Cu;
    {
        const bool branch_taken_0x15d08c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D08Cu;
        // 0x15d090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d08c) {
            ctx->pc = 0x15D1B0u;
            goto label_15d1b0;
        }
    }
    ctx->pc = 0x15D094u;
label_15d094:
    // 0x15d094: 0xc045e9c  jal         func_117A70
label_15d098:
    if (ctx->pc == 0x15D098u) {
        ctx->pc = 0x15D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D094u;
        // 0x15d098: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D09Cu;
        goto label_15d09c;
    }
    ctx->pc = 0x15D094u;
    SET_GPR_U32(ctx, 31, 0x15D09Cu);
    ctx->pc = 0x15D098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D094u;
    // 0x15d098: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x15D094u, 0x15D09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D09Cu;
label_15d09c:
    // 0x15d09c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15d09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_15d0a0:
    // 0x15d0a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15d0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d0a4:
    // 0x15d0a4: 0xc042128  jal         func_1084A0
label_15d0a8:
    if (ctx->pc == 0x15D0A8u) {
        ctx->pc = 0x15D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0A4u;
        // 0x15d0a8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D0ACu;
        goto label_15d0ac;
    }
    ctx->pc = 0x15D0A4u;
    SET_GPR_U32(ctx, 31, 0x15D0ACu);
    ctx->pc = 0x15D0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D0A4u;
    // 0x15d0a8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x15D0A4u, 0x15D0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D0ACu;
label_15d0ac:
    // 0x15d0ac: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x15d0acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_15d0b0:
    // 0x15d0b0: 0xfa810350  sqc2        $vf1, 0x350($s4)
    ctx->pc = 0x15d0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 848), _mm_castps_si128(ctx->vu0_vf[1]));
label_15d0b4:
    // 0x15d0b4: 0x8e95032c  lw          $s5, 0x32C($s4)
    ctx->pc = 0x15d0b4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 812)));
label_15d0b8:
    // 0x15d0b8: 0x12a0003d  beqz        $s5, . + 4 + (0x3D << 2)
label_15d0bc:
    if (ctx->pc == 0x15D0BCu) {
        ctx->pc = 0x15D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0B8u;
        // 0x15d0bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D0C0u;
        goto label_15d0c0;
    }
    ctx->pc = 0x15D0B8u;
    {
        const bool branch_taken_0x15d0b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0B8u;
        // 0x15d0bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0b8) {
            ctx->pc = 0x15D1B0u;
            goto label_15d1b0;
        }
    }
    ctx->pc = 0x15D0C0u;
label_15d0c0:
    // 0x15d0c0: 0xc04f0b6  jal         func_13C2D8
label_15d0c4:
    if (ctx->pc == 0x15D0C4u) {
        ctx->pc = 0x15D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0C0u;
        // 0x15d0c4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D0C8u;
        goto label_15d0c8;
    }
    ctx->pc = 0x15D0C0u;
    SET_GPR_U32(ctx, 31, 0x15D0C8u);
    ctx->pc = 0x15D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D0C0u;
    // 0x15d0c4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15D0C0u, 0x15D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D0C8u;
label_15d0c8:
    // 0x15d0c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15d0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15d0cc:
    // 0x15d0cc: 0xc0f6a96  jal         func_3DAA58
label_15d0d0:
    if (ctx->pc == 0x15D0D0u) {
        ctx->pc = 0x15D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0CCu;
        // 0x15d0d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D0D4u;
        goto label_15d0d4;
    }
    ctx->pc = 0x15D0CCu;
    SET_GPR_U32(ctx, 31, 0x15D0D4u);
    ctx->pc = 0x15D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D0CCu;
    // 0x15d0d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x15D0CCu, 0x15D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D0D4u;
label_15d0d4:
    // 0x15d0d4: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x15d0d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_15d0d8:
    // 0x15d0d8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15d0d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15d0dc:
    // 0x15d0dc: 0x26520350  addiu       $s2, $s2, 0x350
    ctx->pc = 0x15d0dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 848));
label_15d0e0:
    // 0x15d0e0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15d0e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15d0e4:
    // 0x15d0e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15d0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d0e8:
    // 0x15d0e8: 0xc057b04  jal         func_15EC10
label_15d0ec:
    if (ctx->pc == 0x15D0ECu) {
        ctx->pc = 0x15D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0E8u;
        // 0x15d0ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D0F0u;
        goto label_15d0f0;
    }
    ctx->pc = 0x15D0E8u;
    SET_GPR_U32(ctx, 31, 0x15D0F0u);
    ctx->pc = 0x15D0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D0E8u;
    // 0x15d0ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x15D0E8u, 0x15D0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D0F0u;
label_15d0f0:
    // 0x15d0f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d0f4:
    // 0x15d0f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15d0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15d0f8:
    // 0x15d0f8: 0xc06fb8e  jal         func_1BEE38
label_15d0fc:
    if (ctx->pc == 0x15D0FCu) {
        ctx->pc = 0x15D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0F8u;
        // 0x15d0fc: 0xae900360  sw          $s0, 0x360($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 864), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D100u;
        goto label_15d100;
    }
    ctx->pc = 0x15D0F8u;
    SET_GPR_U32(ctx, 31, 0x15D100u);
    ctx->pc = 0x15D0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D0F8u;
    // 0x15d0fc: 0xae900360  sw          $s0, 0x360($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 864), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE38u, 0x15D0F8u, 0x15D100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D100u;
label_15d100:
    // 0x15d100: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d104:
    // 0x15d104: 0xc045fea  jal         func_117FA8
label_15d108:
    if (ctx->pc == 0x15D108u) {
        ctx->pc = 0x15D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D104u;
        // 0x15d108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D10Cu;
        goto label_15d10c;
    }
    ctx->pc = 0x15D104u;
    SET_GPR_U32(ctx, 31, 0x15D10Cu);
    ctx->pc = 0x15D108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D104u;
    // 0x15d108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x15D104u, 0x15D10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D10Cu;
label_15d10c:
    // 0x15d10c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15d10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15d110:
    // 0x15d110: 0xc046058  jal         func_118160
label_15d114:
    if (ctx->pc == 0x15D114u) {
        ctx->pc = 0x15D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D110u;
        // 0x15d114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D118u;
        goto label_15d118;
    }
    ctx->pc = 0x15D110u;
    SET_GPR_U32(ctx, 31, 0x15D118u);
    ctx->pc = 0x15D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D110u;
    // 0x15d114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x15D110u, 0x15D118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D118u;
label_15d118:
    // 0x15d118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d11c:
    // 0x15d11c: 0xc046104  jal         func_118410
label_15d120:
    if (ctx->pc == 0x15D120u) {
        ctx->pc = 0x15D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D11Cu;
        // 0x15d120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D124u;
        goto label_15d124;
    }
    ctx->pc = 0x15D11Cu;
    SET_GPR_U32(ctx, 31, 0x15D124u);
    ctx->pc = 0x15D120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D11Cu;
    // 0x15d120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x15D11Cu, 0x15D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D124u;
label_15d124:
    // 0x15d124: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x15d124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_15d128:
    // 0x15d128: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15d128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15d12c:
    // 0x15d12c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15d12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d130:
    // 0x15d130: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15d130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15d134:
    // 0x15d134: 0x40f809  jalr        $v0
label_15d138:
    if (ctx->pc == 0x15D138u) {
        ctx->pc = 0x15D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D134u;
        // 0x15d138: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D13Cu;
        goto label_15d13c;
    }
    ctx->pc = 0x15D134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D13Cu);
        ctx->pc = 0x15D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D134u;
        // 0x15d138: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D134u, 0x15D13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D13Cu;
label_15d13c:
    // 0x15d13c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15d13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15d140:
    // 0x15d140: 0xc04d7da  jal         func_135F68
label_15d144:
    if (ctx->pc == 0x15D144u) {
        ctx->pc = 0x15D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D140u;
        // 0x15d144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D148u;
        goto label_15d148;
    }
    ctx->pc = 0x15D140u;
    SET_GPR_U32(ctx, 31, 0x15D148u);
    ctx->pc = 0x15D144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D140u;
    // 0x15d144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F68u, 0x15D140u, 0x15D148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D148u;
label_15d148:
    // 0x15d148: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15d148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d14c:
    // 0x15d14c: 0xc052002  jal         func_148008
label_15d150:
    if (ctx->pc == 0x15D150u) {
        ctx->pc = 0x15D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D14Cu;
        // 0x15d150: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D154u;
        goto label_15d154;
    }
    ctx->pc = 0x15D14Cu;
    SET_GPR_U32(ctx, 31, 0x15D154u);
    ctx->pc = 0x15D150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D14Cu;
    // 0x15d150: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148008u, 0x15D14Cu, 0x15D154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D154u;
label_15d154:
    // 0x15d154: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15d154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15d158:
    // 0x15d158: 0xc052000  jal         func_148000
label_15d15c:
    if (ctx->pc == 0x15D15Cu) {
        ctx->pc = 0x15D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D158u;
        // 0x15d15c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D160u;
        goto label_15d160;
    }
    ctx->pc = 0x15D158u;
    SET_GPR_U32(ctx, 31, 0x15D160u);
    ctx->pc = 0x15D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D158u;
    // 0x15d15c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148000u, 0x15D158u, 0x15D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D160u;
label_15d160:
    // 0x15d160: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x15d160u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15d164:
    // 0x15d164: 0xfa810370  sqc2        $vf1, 0x370($s4)
    ctx->pc = 0x15d164u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 880), _mm_castps_si128(ctx->vu0_vf[1]));
label_15d168:
    // 0x15d168: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x15d168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_15d16c:
    // 0x15d16c: 0xc0aafa6  jal         func_2ABE98
label_15d170:
    if (ctx->pc == 0x15D170u) {
        ctx->pc = 0x15D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D16Cu;
        // 0x15d170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D174u;
        goto label_15d174;
    }
    ctx->pc = 0x15D16Cu;
    SET_GPR_U32(ctx, 31, 0x15D174u);
    ctx->pc = 0x15D170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D16Cu;
    // 0x15d170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15D16Cu, 0x15D174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D174u;
label_15d174:
    // 0x15d174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d178:
    // 0x15d178: 0xc0aafc8  jal         func_2ABF20
label_15d17c:
    if (ctx->pc == 0x15D17Cu) {
        ctx->pc = 0x15D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D178u;
        // 0x15d17c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D180u;
        goto label_15d180;
    }
    ctx->pc = 0x15D178u;
    SET_GPR_U32(ctx, 31, 0x15D180u);
    ctx->pc = 0x15D17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D178u;
    // 0x15d17c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x15D178u, 0x15D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D180u;
label_15d180:
    // 0x15d180: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15d180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15d184:
    // 0x15d184: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x15d184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15d188:
    // 0x15d188: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d18c:
    // 0x15d18c: 0xae95032c  sw          $s5, 0x32C($s4)
    ctx->pc = 0x15d18cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 812), GPR_U32(ctx, 21));
label_15d190:
    // 0x15d190: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x15d190u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
label_15d194:
    // 0x15d194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d198:
    // 0x15d198: 0xae830330  sw          $v1, 0x330($s4)
    ctx->pc = 0x15d198u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 3));
label_15d19c:
    // 0x15d19c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15d19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15d1a0:
    // 0x15d1a0: 0xae82033c  sw          $v0, 0x33C($s4)
    ctx->pc = 0x15d1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 2));
label_15d1a4:
    // 0x15d1a4: 0xae860324  sw          $a2, 0x324($s4)
    ctx->pc = 0x15d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 6));
label_15d1a8:
    // 0x15d1a8: 0xc0aafac  jal         func_2ABEB0
label_15d1ac:
    if (ctx->pc == 0x15D1ACu) {
        ctx->pc = 0x15D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1A8u;
        // 0x15d1ac: 0xae870328  sw          $a3, 0x328($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 808), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1B0u;
        goto label_15d1b0;
    }
    ctx->pc = 0x15D1A8u;
    SET_GPR_U32(ctx, 31, 0x15D1B0u);
    ctx->pc = 0x15D1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1A8u;
    // 0x15d1ac: 0xae870328  sw          $a3, 0x328($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 808), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15D1A8u, 0x15D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1B0u;
label_15d1b0:
    // 0x15d1b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x15d1b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15d1b4:
    // 0x15d1b4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x15d1b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15d1b8:
    // 0x15d1b8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x15d1b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15d1bc:
    // 0x15d1bc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x15d1bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15d1c0:
    // 0x15d1c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x15d1c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15d1c4:
    // 0x15d1c4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x15d1c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15d1c8:
    // 0x15d1c8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x15d1c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15d1cc:
    // 0x15d1cc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x15d1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_15d1d0:
    // 0x15d1d0: 0x3e00008  jr          $ra
label_15d1d4:
    if (ctx->pc == 0x15D1D4u) {
        ctx->pc = 0x15D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1D0u;
        // 0x15d1d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1D8u;
        goto label_fallthrough_0x15d1d0;
    }
    ctx->pc = 0x15D1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1D0u;
        // 0x15d1d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15d1d0:
    ctx->pc = 0x15D1D8u;
}
