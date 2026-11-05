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

// Function: sub_00172C98
// Address: 0x172c98 - 0x173290
void sub_00172C98_0x172c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172C98_0x172c98");
#endif

    switch (ctx->pc) {
        case 0x172ce0u: goto label_172ce0;
        case 0x172cf0u: goto label_172cf0;
        case 0x172d14u: goto label_172d14;
        case 0x172d50u: goto label_172d50;
        case 0x172df0u: goto label_172df0;
        case 0x172e40u: goto label_172e40;
        case 0x172e50u: goto label_172e50;
        case 0x172e94u: goto label_172e94;
        case 0x172f44u: goto label_172f44;
        case 0x172f5cu: goto label_172f5c;
        case 0x172f74u: goto label_172f74;
        case 0x172f8cu: goto label_172f8c;
        case 0x172f9cu: goto label_172f9c;
        case 0x172fb0u: goto label_172fb0;
        case 0x172fe4u: goto label_172fe4;
        case 0x173030u: goto label_173030;
        case 0x173064u: goto label_173064;
        case 0x17307cu: goto label_17307c;
        case 0x1730bcu: goto label_1730bc;
        case 0x173154u: goto label_173154;
        case 0x1731acu: goto label_1731ac;
        case 0x1731c4u: goto label_1731c4;
        case 0x1731dcu: goto label_1731dc;
        case 0x1731ecu: goto label_1731ec;
        case 0x173204u: goto label_173204;
        case 0x173214u: goto label_173214;
        case 0x173224u: goto label_173224;
        case 0x173234u: goto label_173234;
        default: break;
    }

    ctx->pc = 0x172c98u;

    // 0x172c98: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x172c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x172c9c: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x172c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
    // 0x172ca0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x172ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x172ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ca8: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x172ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
    // 0x172cac: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x172cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x172cb0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x172cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x172cb4: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x172cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x172cb8: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x172cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
    // 0x172cbc: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x172cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x172cc0: 0xffb50168  sd          $s5, 0x168($sp)
    ctx->pc = 0x172cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 21));
    // 0x172cc4: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x172cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x172cc8: 0xffb70178  sd          $s7, 0x178($sp)
    ctx->pc = 0x172cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 23));
    // 0x172ccc: 0xffbe0180  sd          $fp, 0x180($sp)
    ctx->pc = 0x172cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x172cd0: 0xffbf0188  sd          $ra, 0x188($sp)
    ctx->pc = 0x172cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 31));
    // 0x172cd4: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x172cd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x172cd8: 0xc049498  jal         func_125260
    ctx->pc = 0x172CD8u;
    SET_GPR_U32(ctx, 31, 0x172CE0u);
    ctx->pc = 0x172CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CD8u;
    // 0x172cdc: 0xe7b40190  swc1        $f20, 0x190($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x125260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125260u, 0x172CD8u, 0x172CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172CE0u;
label_172ce0:
    // 0x172ce0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x172ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x172ce4: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x172ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x172ce8: 0xc0494a0  jal         func_125280
    ctx->pc = 0x172CE8u;
    SET_GPR_U32(ctx, 31, 0x172CF0u);
    ctx->pc = 0x172CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CE8u;
    // 0x172cec: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125280u, 0x172CE8u, 0x172CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172CF0u;
label_172cf0:
    // 0x172cf0: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x172cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x172cf4: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x172cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x172cf8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x172CF8u;
    {
        const bool branch_taken_0x172cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CF8u;
        // 0x172cfc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172cf8) {
            ctx->pc = 0x172D0Cu;
            goto label_172d0c;
        }
    }
    ctx->pc = 0x172D00u;
    // 0x172d00: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x172d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x172d04: 0x10600155  beqz        $v1, . + 4 + (0x155 << 2)
    ctx->pc = 0x172D04u;
    {
        const bool branch_taken_0x172d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D04u;
        // 0x172d08: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d04) {
            ctx->pc = 0x17325Cu;
            goto label_17325c;
        }
    }
    ctx->pc = 0x172D0Cu;
label_172d0c:
    // 0x172d0c: 0xc04f872  jal         func_13E1C8
    ctx->pc = 0x172D0Cu;
    SET_GPR_U32(ctx, 31, 0x172D14u);
    ctx->pc = 0x172D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D0Cu;
    // 0x172d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E1C8u, 0x172D0Cu, 0x172D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D14u;
label_172d14:
    // 0x172d14: 0x10400150  beqz        $v0, . + 4 + (0x150 << 2)
    ctx->pc = 0x172D14u;
    {
        const bool branch_taken_0x172d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D14u;
        // 0x172d18: 0xafa2012c  sw          $v0, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d14) {
            ctx->pc = 0x173258u;
            goto label_173258;
        }
    }
    ctx->pc = 0x172D1Cu;
    // 0x172d1c: 0x8e22026c  lw          $v0, 0x26C($s1)
    ctx->pc = 0x172d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x172d20: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x172d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x172d24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x172d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x172d28: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x172d28u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x172d2c: 0xae22026c  sw          $v0, 0x26C($s1)
    ctx->pc = 0x172d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 2));
    // 0x172d30: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x172D30u;
    {
        const bool branch_taken_0x172d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d30) {
            ctx->pc = 0x172D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172D30u;
            // 0x172d34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x172D38u;
            goto label_172d38;
        }
    }
    ctx->pc = 0x172D38u;
label_172d38:
    // 0x172d38: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x172d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x172d3c: 0x2010  mfhi        $a0
    ctx->pc = 0x172d3cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x172d40: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x172d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x172d44: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x172d44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x172d48: 0x10400143  beqz        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x172D48u;
    {
        const bool branch_taken_0x172d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D48u;
        // 0x172d4c: 0xafa40130  sw          $a0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d48) {
            ctx->pc = 0x173258u;
            goto label_173258;
        }
    }
    ctx->pc = 0x172D50u;
label_172d50:
    // 0x172d50: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x172d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x172d54: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x172d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x172d58: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x172d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x172d5c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x172d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x172d60: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x172d60u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172d64: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x172d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x172d68: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x172d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x172d6c: 0x24429c14  addiu       $v0, $v0, -0x63EC
    ctx->pc = 0x172d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x172d70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x172d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172d74: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x172d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172d78: 0x10600130  beqz        $v1, . + 4 + (0x130 << 2)
    ctx->pc = 0x172D78u;
    {
        const bool branch_taken_0x172d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D78u;
        // 0x172d7c: 0xafa30134  sw          $v1, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d78) {
            ctx->pc = 0x17323Cu;
            goto label_17323c;
        }
    }
    ctx->pc = 0x172D80u;
    // 0x172d80: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x172d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x172d84: 0x5440012e  bnel        $v0, $zero, . + 4 + (0x12E << 2)
    ctx->pc = 0x172D84u;
    {
        const bool branch_taken_0x172d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172d84) {
            ctx->pc = 0x172D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172D84u;
            // 0x172d88: 0x8fa30130  lw          $v1, 0x130($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173240u;
            goto label_173240;
        }
    }
    ctx->pc = 0x172D8Cu;
    // 0x172d8c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x172d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x172d90: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x172d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x172d94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x172d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x172d98: 0x24639b10  addiu       $v1, $v1, -0x64F0
    ctx->pc = 0x172d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941456));
    // 0x172d9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172da0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x172da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172da4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x172DA4u;
    {
        const bool branch_taken_0x172da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172da4) {
            ctx->pc = 0x172DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172DA4u;
            // 0x172da8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172DB4u;
            goto label_172db4;
        }
    }
    ctx->pc = 0x172DACu;
    // 0x172dac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172DACu;
    {
        const bool branch_taken_0x172dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DACu;
        // 0x172db0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172dac) {
            ctx->pc = 0x172DBCu;
            goto label_172dbc;
        }
    }
    ctx->pc = 0x172DB4u;
label_172db4:
    // 0x172db4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x172db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172db8: 0x247e0070  addiu       $fp, $v1, 0x70
    ctx->pc = 0x172db8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_172dbc:
    // 0x172dbc: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x172dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x172dc0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x172dc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172dc4: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x172dc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x172dc8: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x172dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x172dcc: 0x34214ff3  ori         $at, $at, 0x4FF3
    ctx->pc = 0x172dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20467);
    // 0x172dd0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x172dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x172dd4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x172dd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172dd8: 0x284102b  sltu        $v0, $s4, $a0
    ctx->pc = 0x172dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x172ddc: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x172DDCu;
    {
        const bool branch_taken_0x172ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DDCu;
        // 0x172de0: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ddc) {
            ctx->pc = 0x172F18u;
            goto label_172f18;
        }
    }
    ctx->pc = 0x172DE4u;
    // 0x172de4: 0x24170009  addiu       $s7, $zero, 0x9
    ctx->pc = 0x172de4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x172de8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x172de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x172dec: 0x0  nop
    ctx->pc = 0x172decu;
    // NOP
label_172df0:
    // 0x172df0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x172df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x172df4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x172df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172df8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x172df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x172dfc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x172dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x172e00: 0x24639c14  addiu       $v1, $v1, -0x63EC
    ctx->pc = 0x172e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941716));
    // 0x172e04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172e08: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x172e08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172e0c: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x172e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x172e10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172E10u;
    {
        const bool branch_taken_0x172e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172e10) {
            ctx->pc = 0x172E20u;
            goto label_172e20;
        }
    }
    ctx->pc = 0x172E18u;
    // 0x172e18: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x172e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x172e1c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x172e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_172e20:
    // 0x172e20: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x172e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x172e24: 0x34214f80  ori         $at, $at, 0x4F80
    ctx->pc = 0x172e24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20352);
    // 0x172e28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x172e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x172e2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x172E2Cu;
    {
        const bool branch_taken_0x172e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E2Cu;
        // 0x172e30: 0xafb70120  sw          $s7, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e2c) {
            ctx->pc = 0x172E40u;
            goto label_172e40;
        }
    }
    ctx->pc = 0x172E34u;
    // 0x172e34: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x172e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x172e38: 0xc04428e  jal         func_110A38
    ctx->pc = 0x172E38u;
    SET_GPR_U32(ctx, 31, 0x172E40u);
    ctx->pc = 0x172E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E38u;
    // 0x172e3c: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110A38u, 0x172E38u, 0x172E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172E40u;
label_172e40:
    // 0x172e40: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x172E40u;
    {
        const bool branch_taken_0x172e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E40u;
        // 0x172e44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e40) {
            ctx->pc = 0x172EE8u;
            goto label_172ee8;
        }
    }
    ctx->pc = 0x172E48u;
    // 0x172e48: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x172E48u;
    SET_GPR_U32(ctx, 31, 0x172E50u);
    ctx->pc = 0x172E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E48u;
    // 0x172e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x172E48u, 0x172E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172E50u;
label_172e50:
    // 0x172e50: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x172e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x172e54: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x172e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x172e58: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x172e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x172e5c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x172e5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x172e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x172e64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x172e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x172e68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x172e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172e6c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x172E6Cu;
    {
        const bool branch_taken_0x172e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172e6c) {
            ctx->pc = 0x172E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172E6Cu;
            // 0x172e70: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172E7Cu;
            goto label_172e7c;
        }
    }
    ctx->pc = 0x172E74u;
    // 0x172e74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172E74u;
    {
        const bool branch_taken_0x172e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E74u;
        // 0x172e78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e74) {
            ctx->pc = 0x172E84u;
            goto label_172e84;
        }
    }
    ctx->pc = 0x172E7Cu;
label_172e7c:
    // 0x172e7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x172e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172e80: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x172e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_172e84:
    // 0x172e84: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x172E84u;
    {
        const bool branch_taken_0x172e84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E84u;
        // 0x172e88: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e84) {
            ctx->pc = 0x172EB0u;
            goto label_172eb0;
        }
    }
    ctx->pc = 0x172E8Cu;
    // 0x172e8c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x172E8Cu;
    SET_GPR_U32(ctx, 31, 0x172E94u);
    ctx->pc = 0x172E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E8Cu;
    // 0x172e90: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x172E8Cu, 0x172E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172E94u;
label_172e94:
    // 0x172e94: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x172e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x172e98: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x172e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172e9c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x172e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172ea0: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x172ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x172ea4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x172ea4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x172ea8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x172ea8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x172eac: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x172eacu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_172eb0:
    // 0x172eb0: 0x3a620009  xori        $v0, $s3, 0x9
    ctx->pc = 0x172eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)9);
    // 0x172eb4: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x172eb4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x172eb8: 0x5480000e  bnel        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x172EB8u;
    {
        const bool branch_taken_0x172eb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x172eb8) {
            ctx->pc = 0x172EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172EB8u;
            // 0x172ebc: 0x8fb30120  lw          $s3, 0x120($sp) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172EF4u;
            goto label_172ef4;
        }
    }
    ctx->pc = 0x172EC0u;
    // 0x172ec0: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x172ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x172ec4: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x172ec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x172ec8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x172EC8u;
    {
        const bool branch_taken_0x172ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172ec8) {
            ctx->pc = 0x172ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172EC8u;
            // 0x172ecc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172EE8u;
            goto label_172ee8;
        }
    }
    ctx->pc = 0x172ED0u;
    // 0x172ed0: 0x14730005  bne         $v1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x172ED0u;
    {
        const bool branch_taken_0x172ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x172ed0) {
            ctx->pc = 0x172EE8u;
            goto label_172ee8;
        }
    }
    ctx->pc = 0x172ED8u;
    // 0x172ed8: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x172ed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172edc: 0x0  nop
    ctx->pc = 0x172edcu;
    // NOP
    // 0x172ee0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x172EE0u;
    {
        const bool branch_taken_0x172ee0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172ee0) {
            ctx->pc = 0x172EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172EE0u;
            // 0x172ee4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172EE8u;
            goto label_172ee8;
        }
    }
    ctx->pc = 0x172EE8u;
label_172ee8:
    // 0x172ee8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x172EE8u;
    {
        const bool branch_taken_0x172ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x172EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172EE8u;
        // 0x172eec: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ee8) {
            ctx->pc = 0x172F04u;
            goto label_172f04;
        }
    }
    ctx->pc = 0x172EF0u;
    // 0x172ef0: 0x8fb30120  lw          $s3, 0x120($sp)
    ctx->pc = 0x172ef0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_172ef4:
    // 0x172ef4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x172ef4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x172ef8: 0xae360274  sw          $s6, 0x274($s1)
    ctx->pc = 0x172ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 22));
    // 0x172efc: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x172efcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f00: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x172f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_172f04:
    // 0x172f04: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x172f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x172f08: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x172f08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x172f0c: 0x244182b  sltu        $v1, $s2, $a0
    ctx->pc = 0x172f0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x172f10: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x172F10u;
    {
        const bool branch_taken_0x172f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F10u;
        // 0x172f14: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f10) {
            ctx->pc = 0x172DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172df0;
        }
    }
    ctx->pc = 0x172F18u;
label_172f18:
    // 0x172f18: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x172f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x172f1c: 0x1262003c  beq         $s3, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x172F1Cu;
    {
        const bool branch_taken_0x172f1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x172F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F1Cu;
        // 0x172f20: 0x8fa30128  lw          $v1, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f1c) {
            ctx->pc = 0x173010u;
            goto label_173010;
        }
    }
    ctx->pc = 0x172F24u;
    // 0x172f24: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x172f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x172f28: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x172F28u;
    {
        const bool branch_taken_0x172f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F28u;
        // 0x172f2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f28) {
            ctx->pc = 0x172F9Cu;
            goto label_172f9c;
        }
    }
    ctx->pc = 0x172F30u;
    // 0x172f30: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x172f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x172f34: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172F34u;
    {
        const bool branch_taken_0x172f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x172F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F34u;
        // 0x172f38: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f34) {
            ctx->pc = 0x172F4Cu;
            goto label_172f4c;
        }
    }
    ctx->pc = 0x172F3Cu;
    // 0x172f3c: 0xc05c874  jal         func_1721D0
    ctx->pc = 0x172F3Cu;
    SET_GPR_U32(ctx, 31, 0x172F44u);
    ctx->pc = 0x172F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F3Cu;
    // 0x172f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721D0u, 0x172F3Cu, 0x172F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F44u;
label_172f44:
    // 0x172f44: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x172F44u;
    {
        const bool branch_taken_0x172f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F44u;
        // 0x172f48: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f44) {
            ctx->pc = 0x172FA0u;
            goto label_172fa0;
        }
    }
    ctx->pc = 0x172F4Cu;
label_172f4c:
    // 0x172f4c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172F4Cu;
    {
        const bool branch_taken_0x172f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x172F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F4Cu;
        // 0x172f50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f4c) {
            ctx->pc = 0x172F64u;
            goto label_172f64;
        }
    }
    ctx->pc = 0x172F54u;
    // 0x172f54: 0xc05c7e6  jal         func_171F98
    ctx->pc = 0x172F54u;
    SET_GPR_U32(ctx, 31, 0x172F5Cu);
    ctx->pc = 0x172F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F54u;
    // 0x172f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F98u, 0x172F54u, 0x172F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F5Cu;
label_172f5c:
    // 0x172f5c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x172F5Cu;
    {
        const bool branch_taken_0x172f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F5Cu;
        // 0x172f60: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f5c) {
            ctx->pc = 0x172FA0u;
            goto label_172fa0;
        }
    }
    ctx->pc = 0x172F64u;
label_172f64:
    // 0x172f64: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172F64u;
    {
        const bool branch_taken_0x172f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x172f64) {
            ctx->pc = 0x172F7Cu;
            goto label_172f7c;
        }
    }
    ctx->pc = 0x172F6Cu;
    // 0x172f6c: 0xc05c75a  jal         func_171D68
    ctx->pc = 0x172F6Cu;
    SET_GPR_U32(ctx, 31, 0x172F74u);
    ctx->pc = 0x172F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F6Cu;
    // 0x172f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D68u, 0x172F6Cu, 0x172F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F74u;
label_172f74:
    // 0x172f74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x172F74u;
    {
        const bool branch_taken_0x172f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F74u;
        // 0x172f78: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f74) {
            ctx->pc = 0x172FA0u;
            goto label_172fa0;
        }
    }
    ctx->pc = 0x172F7Cu;
label_172f7c:
    // 0x172f7c: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x172F7Cu;
    {
        const bool branch_taken_0x172f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x172F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F7Cu;
        // 0x172f80: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f7c) {
            ctx->pc = 0x172FBCu;
            goto label_172fbc;
        }
    }
    ctx->pc = 0x172F84u;
    // 0x172f84: 0xc0591e6  jal         func_164798
    ctx->pc = 0x172F84u;
    SET_GPR_U32(ctx, 31, 0x172F8Cu);
    ctx->pc = 0x172F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F84u;
    // 0x172f88: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164798u, 0x172F84u, 0x172F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F8Cu;
label_172f8c:
    // 0x172f8c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x172F8Cu;
    {
        const bool branch_taken_0x172f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f8c) {
            ctx->pc = 0x172F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172F8Cu;
            // 0x172f90: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172FC4u;
            goto label_172fc4;
        }
    }
    ctx->pc = 0x172F94u;
    // 0x172f94: 0xc05c728  jal         func_171CA0
    ctx->pc = 0x172F94u;
    SET_GPR_U32(ctx, 31, 0x172F9Cu);
    ctx->pc = 0x172F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F94u;
    // 0x172f98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171CA0u, 0x172F94u, 0x172F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F9Cu;
label_172f9c:
    // 0x172f9c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x172f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_172fa0:
    // 0x172fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fa4: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x172fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x172fa8: 0xc05c838  jal         func_1720E0
    ctx->pc = 0x172FA8u;
    SET_GPR_U32(ctx, 31, 0x172FB0u);
    ctx->pc = 0x172FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172FA8u;
    // 0x172fac: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1720E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1720E0u, 0x172FA8u, 0x172FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172FB0u;
label_172fb0:
    // 0x172fb0: 0xae350270  sw          $s5, 0x270($s1)
    ctx->pc = 0x172fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 21));
    // 0x172fb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172FB4u;
    {
        const bool branch_taken_0x172fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FB4u;
        // 0x172fb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fb4) {
            ctx->pc = 0x172FC4u;
            goto label_172fc4;
        }
    }
    ctx->pc = 0x172FBCu;
label_172fbc:
    // 0x172fbc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x172fbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fc0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x172fc0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_172fc4:
    // 0x172fc4: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x172FC4u;
    {
        const bool branch_taken_0x172fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FC4u;
        // 0x172fc8: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fc4) {
            ctx->pc = 0x173258u;
            goto label_173258;
        }
    }
    ctx->pc = 0x172FCCu;
    // 0x172fcc: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x172fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x172fd0: 0x24639b10  addiu       $v1, $v1, -0x64F0
    ctx->pc = 0x172fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941456));
    // 0x172fd4: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x172fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x172fd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172fdc: 0xc0cda26  jal         func_336898
    ctx->pc = 0x172FDCu;
    SET_GPR_U32(ctx, 31, 0x172FE4u);
    ctx->pc = 0x172FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172FDCu;
    // 0x172fe0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x172FDCu, 0x172FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172FE4u;
label_172fe4:
    // 0x172fe4: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x172fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x172fe8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x172fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172fec: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x172fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x172ff0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x172ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172ff4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x172ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x172ff8: 0x24849c14  addiu       $a0, $a0, -0x63EC
    ctx->pc = 0x172ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941716));
    // 0x172ffc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x172ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x173000: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x173000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173004: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x173004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173008: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x173008u;
    {
        const bool branch_taken_0x173008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173008u;
        // 0x17300c: 0xac6500d4  sw          $a1, 0xD4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173008) {
            ctx->pc = 0x173258u;
            goto label_173258;
        }
    }
    ctx->pc = 0x173010u;
label_173010:
    // 0x173010: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x173010u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173014: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x173014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x173018: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x173018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x17301c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x17301cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x173020: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x173020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x173024: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x173024u;
    {
        const bool branch_taken_0x173024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173024u;
        // 0x173028: 0x2c0b82d  daddu       $s7, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173024) {
            ctx->pc = 0x173184u;
            goto label_173184;
        }
    }
    ctx->pc = 0x17302Cu;
    // 0x17302c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17302cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_173030:
    // 0x173030: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x173030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x173034: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x173034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x173038: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x173038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17303c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x17303cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173040: 0x1240004a  beqz        $s2, . + 4 + (0x4A << 2)
    ctx->pc = 0x173040u;
    {
        const bool branch_taken_0x173040 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x173044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173040u;
        // 0x173044: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173040) {
            ctx->pc = 0x17316Cu;
            goto label_17316c;
        }
    }
    ctx->pc = 0x173048u;
    // 0x173048: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x173048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x17304c: 0x2464a080  addiu       $a0, $v1, -0x5F80
    ctx->pc = 0x17304cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942848));
    // 0x173050: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x173050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173054: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x173054u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173058: 0x26900070  addiu       $s0, $s4, 0x70
    ctx->pc = 0x173058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x17305c: 0xc0498de  jal         func_126378
    ctx->pc = 0x17305Cu;
    SET_GPR_U32(ctx, 31, 0x173064u);
    ctx->pc = 0x173060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17305Cu;
    // 0x173060: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126378u, 0x17305Cu, 0x173064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173064u;
label_173064:
    // 0x173064: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x173064u;
    {
        const bool branch_taken_0x173064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173064u;
        // 0x173068: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173064) {
            ctx->pc = 0x173170u;
            goto label_173170;
        }
    }
    ctx->pc = 0x17306Cu;
    // 0x17306c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x17306cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x173070: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x173070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173074: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x173074u;
    SET_GPR_U32(ctx, 31, 0x17307Cu);
    ctx->pc = 0x173078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173074u;
    // 0x173078: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x173074u, 0x17307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17307Cu;
label_17307c:
    // 0x17307c: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x17307cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x173080: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x173080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x173084: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x173084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x173088: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x173088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17308c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17308cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x173090: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x173090u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x173094: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x173094u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x173098: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x173098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17309c: 0x0  nop
    ctx->pc = 0x17309cu;
    // NOP
    // 0x1730a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1730A0u;
    {
        const bool branch_taken_0x1730a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1730A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730A0u;
        // 0x1730a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730a0) {
            ctx->pc = 0x1730ACu;
            goto label_1730ac;
        }
    }
    ctx->pc = 0x1730A8u;
    // 0x1730a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1730a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1730ac:
    // 0x1730ac: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1730ACu;
    {
        const bool branch_taken_0x1730ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730ACu;
        // 0x1730b0: 0x8fa40134  lw          $a0, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730ac) {
            ctx->pc = 0x17316Cu;
            goto label_17316c;
        }
    }
    ctx->pc = 0x1730B4u;
    // 0x1730b4: 0xc043a98  jal         func_10EA60
    ctx->pc = 0x1730B4u;
    SET_GPR_U32(ctx, 31, 0x1730BCu);
    ctx->pc = 0x1730B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1730B4u;
    // 0x1730b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EA60u, 0x1730B4u, 0x1730BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1730BCu;
label_1730bc:
    // 0x1730bc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1730bcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1730c0: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x1730c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x1730c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1730c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1730c8: 0x0  nop
    ctx->pc = 0x1730c8u;
    // NOP
    // 0x1730cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1730ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1730d0: 0x0  nop
    ctx->pc = 0x1730d0u;
    // NOP
    // 0x1730d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1730D4u;
    {
        const bool branch_taken_0x1730d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1730D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730D4u;
        // 0x1730d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730d4) {
            ctx->pc = 0x1730E0u;
            goto label_1730e0;
        }
    }
    ctx->pc = 0x1730DCu;
    // 0x1730dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1730dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1730e0:
    // 0x1730e0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1730E0u;
    {
        const bool branch_taken_0x1730e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730E0u;
        // 0x1730e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730e0) {
            ctx->pc = 0x17316Cu;
            goto label_17316c;
        }
    }
    ctx->pc = 0x1730E8u;
    // 0x1730e8: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x1730e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1730ec: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1730ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1730f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1730f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1730f4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1730f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1730f8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1730f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1730fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1730fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173100: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x173100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x173104: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x173104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x173108: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x173108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17310c: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x17310cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x173110: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x173110u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x173114: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x173114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173118: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x173118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x17311c: 0xc7c2000c  lwc1        $f2, 0xC($fp)
    ctx->pc = 0x17311cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x173120: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x173120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x173124: 0xe7a2010c  swc1        $f2, 0x10C($sp)
    ctx->pc = 0x173124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x173128: 0xc6800070  lwc1        $f0, 0x70($s4)
    ctx->pc = 0x173128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17312c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x17312cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x173130: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x173130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173134: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x173134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x173138: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x173138u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x17313c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x17313cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173140: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x173140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x173144: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x173144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x173148: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x173148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x17314c: 0xc041032  jal         func_1040C8
    ctx->pc = 0x17314Cu;
    SET_GPR_U32(ctx, 31, 0x173154u);
    ctx->pc = 0x173150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17314Cu;
    // 0x173150: 0xe7a2011c  swc1        $f2, 0x11C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x17314Cu, 0x173154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173154u;
label_173154:
    // 0x173154: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173154u;
    {
        const bool branch_taken_0x173154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173154u;
        // 0x173158: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173154) {
            ctx->pc = 0x173170u;
            goto label_173170;
        }
    }
    ctx->pc = 0x17315Cu;
    // 0x17315c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17315cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173160: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x173160u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173164: 0xafa40138  sw          $a0, 0x138($sp)
    ctx->pc = 0x173164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 4));
    // 0x173168: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x173168u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_17316c:
    // 0x17316c: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x17316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_173170:
    // 0x173170: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x173170u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x173174: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x173174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x173178: 0x2e2182b  sltu        $v1, $s7, $v0
    ctx->pc = 0x173178u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17317c: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x17317Cu;
    {
        const bool branch_taken_0x17317c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x173180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17317Cu;
        // 0x173180: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17317c) {
            ctx->pc = 0x173030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173030;
        }
    }
    ctx->pc = 0x173184u;
label_173184:
    // 0x173184: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x173184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x173188: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x173188u;
    {
        const bool branch_taken_0x173188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173188u;
        // 0x17318c: 0x8fa30130  lw          $v1, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173188) {
            ctx->pc = 0x173240u;
            goto label_173240;
        }
    }
    ctx->pc = 0x173190u;
    // 0x173190: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x173190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x173194: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x173194u;
    {
        const bool branch_taken_0x173194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173194u;
        // 0x173198: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173194) {
            ctx->pc = 0x1731DCu;
            goto label_1731dc;
        }
    }
    ctx->pc = 0x17319Cu;
    // 0x17319c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17319Cu;
    {
        const bool branch_taken_0x17319c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1731A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17319Cu;
        // 0x1731a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17319c) {
            ctx->pc = 0x1731B4u;
            goto label_1731b4;
        }
    }
    ctx->pc = 0x1731A4u;
    // 0x1731a4: 0xc05c874  jal         func_1721D0
    ctx->pc = 0x1731A4u;
    SET_GPR_U32(ctx, 31, 0x1731ACu);
    ctx->pc = 0x1731A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731A4u;
    // 0x1731a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721D0u, 0x1731A4u, 0x1731ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731ACu;
label_1731ac:
    // 0x1731ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1731ACu;
    {
        const bool branch_taken_0x1731ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1731B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731ACu;
        // 0x1731b0: 0xae350278  sw          $s5, 0x278($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731ac) {
            ctx->pc = 0x1731E0u;
            goto label_1731e0;
        }
    }
    ctx->pc = 0x1731B4u;
label_1731b4:
    // 0x1731b4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1731B4u;
    {
        const bool branch_taken_0x1731b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1731B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731B4u;
        // 0x1731b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731b4) {
            ctx->pc = 0x1731CCu;
            goto label_1731cc;
        }
    }
    ctx->pc = 0x1731BCu;
    // 0x1731bc: 0xc05c7e6  jal         func_171F98
    ctx->pc = 0x1731BCu;
    SET_GPR_U32(ctx, 31, 0x1731C4u);
    ctx->pc = 0x1731C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731BCu;
    // 0x1731c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F98u, 0x1731BCu, 0x1731C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731C4u;
label_1731c4:
    // 0x1731c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1731C4u;
    {
        const bool branch_taken_0x1731c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1731C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731C4u;
        // 0x1731c8: 0xae350278  sw          $s5, 0x278($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731c4) {
            ctx->pc = 0x1731E0u;
            goto label_1731e0;
        }
    }
    ctx->pc = 0x1731CCu;
label_1731cc:
    // 0x1731cc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1731CCu;
    {
        const bool branch_taken_0x1731cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1731D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731CCu;
        // 0x1731d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731cc) {
            ctx->pc = 0x1731F4u;
            goto label_1731f4;
        }
    }
    ctx->pc = 0x1731D4u;
    // 0x1731d4: 0xc05c75a  jal         func_171D68
    ctx->pc = 0x1731D4u;
    SET_GPR_U32(ctx, 31, 0x1731DCu);
    ctx->pc = 0x1731D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731D4u;
    // 0x1731d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D68u, 0x1731D4u, 0x1731DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731DCu;
label_1731dc:
    // 0x1731dc: 0xae350278  sw          $s5, 0x278($s1)
    ctx->pc = 0x1731dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 21));
label_1731e0:
    // 0x1731e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1731e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731e4: 0xc05c824  jal         func_172090
    ctx->pc = 0x1731E4u;
    SET_GPR_U32(ctx, 31, 0x1731ECu);
    ctx->pc = 0x1731E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731E4u;
    // 0x1731e8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172090u, 0x1731E4u, 0x1731ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731ECu;
label_1731ec:
    // 0x1731ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1731ECu;
    {
        const bool branch_taken_0x1731ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1731F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731ECu;
        // 0x1731f0: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731ec) {
            ctx->pc = 0x173228u;
            goto label_173228;
        }
    }
    ctx->pc = 0x1731F4u;
label_1731f4:
    // 0x1731f4: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1731F4u;
    {
        const bool branch_taken_0x1731f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1731F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731F4u;
        // 0x1731f8: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731f4) {
            ctx->pc = 0x173228u;
            goto label_173228;
        }
    }
    ctx->pc = 0x1731FCu;
    // 0x1731fc: 0xc0591e6  jal         func_164798
    ctx->pc = 0x1731FCu;
    SET_GPR_U32(ctx, 31, 0x173204u);
    ctx->pc = 0x173200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731FCu;
    // 0x173200: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164798u, 0x1731FCu, 0x173204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173204u;
label_173204:
    // 0x173204: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x173204u;
    {
        const bool branch_taken_0x173204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173204u;
        // 0x173208: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173204) {
            ctx->pc = 0x173228u;
            goto label_173228;
        }
    }
    ctx->pc = 0x17320Cu;
    // 0x17320c: 0xc05c728  jal         func_171CA0
    ctx->pc = 0x17320Cu;
    SET_GPR_U32(ctx, 31, 0x173214u);
    ctx->pc = 0x173210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17320Cu;
    // 0x173210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171CA0u, 0x17320Cu, 0x173214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173214u;
label_173214:
    // 0x173214: 0xae350278  sw          $s5, 0x278($s1)
    ctx->pc = 0x173214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 21));
    // 0x173218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17321c: 0xc05c824  jal         func_172090
    ctx->pc = 0x17321Cu;
    SET_GPR_U32(ctx, 31, 0x173224u);
    ctx->pc = 0x173220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17321Cu;
    // 0x173220: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172090u, 0x17321Cu, 0x173224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173224u;
label_173224:
    // 0x173224: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x173224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_173228:
    // 0x173228: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x173228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17322c: 0xc0498d6  jal         func_126358
    ctx->pc = 0x17322Cu;
    SET_GPR_U32(ctx, 31, 0x173234u);
    ctx->pc = 0x173230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17322Cu;
    // 0x173230: 0x2444a080  addiu       $a0, $v0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126358u, 0x17322Cu, 0x173234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173234u;
label_173234:
    // 0x173234: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x173234u;
    {
        const bool branch_taken_0x173234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173234u;
        // 0x173238: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173234) {
            ctx->pc = 0x17325Cu;
            goto label_17325c;
        }
    }
    ctx->pc = 0x17323Cu;
label_17323c:
    // 0x17323c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x17323cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_173240:
    // 0x173240: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x173240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x173244: 0x2462000b  addiu       $v0, $v1, 0xB
    ctx->pc = 0x173244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 11));
    // 0x173248: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x173248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17324c: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x17324cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x173250: 0x1460febf  bnez        $v1, . + 4 + (-0x141 << 2)
    ctx->pc = 0x173250u;
    {
        const bool branch_taken_0x173250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x173254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173250u;
        // 0x173254: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173250) {
            ctx->pc = 0x172D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172d50;
        }
    }
    ctx->pc = 0x173258u;
label_173258:
    // 0x173258: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x173258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_17325c:
    // 0x17325c: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x17325cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x173260: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x173260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x173264: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x173264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x173268: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x173268u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x17326c: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x17326cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x173270: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x173270u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x173274: 0xdfb70178  ld          $s7, 0x178($sp)
    ctx->pc = 0x173274u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x173278: 0xdfbe0180  ld          $fp, 0x180($sp)
    ctx->pc = 0x173278u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x17327c: 0xdfbf0188  ld          $ra, 0x188($sp)
    ctx->pc = 0x17327cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x173280: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x173280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x173284: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x173284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x173288: 0x3e00008  jr          $ra
    ctx->pc = 0x173288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173288u;
        // 0x17328c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173290u;
}
