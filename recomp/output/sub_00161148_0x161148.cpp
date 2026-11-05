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

// Function: sub_00161148
// Address: 0x161148 - 0x161290
void sub_00161148_0x161148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161148_0x161148");
#endif

    switch (ctx->pc) {
        case 0x161190u: goto label_161190;
        case 0x161228u: goto label_161228;
        default: break;
    }

    ctx->pc = 0x161148u;

    // 0x161148: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x161148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16114c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16114cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x161150: 0x90a304a0  lbu         $v1, 0x4A0($a1)
    ctx->pc = 0x161150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1184)));
    // 0x161154: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x161154u;
    {
        const bool branch_taken_0x161154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161154u;
        // 0x161158: 0x8c482b00  lw          $t0, 0x2B00($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161154) {
            ctx->pc = 0x1611ECu;
            goto label_1611ec;
        }
    }
    ctx->pc = 0x16115Cu;
    // 0x16115c: 0x90a604a2  lbu         $a2, 0x4A2($a1)
    ctx->pc = 0x16115cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1186)));
    // 0x161160: 0x24a203e0  addiu       $v0, $a1, 0x3E0
    ctx->pc = 0x161160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 992));
    // 0x161164: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x161164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161168: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x161168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16116c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16116cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x161170: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x161170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161174: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x161174u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x161178: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x161178u;
    {
        const bool branch_taken_0x161178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x161178) {
            ctx->pc = 0x16117Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161178u;
            // 0x16117c: 0x90a208a4  lbu         $v0, 0x8A4($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1611F0u;
            goto label_1611f0;
        }
    }
    ctx->pc = 0x161180u;
    // 0x161180: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x161180u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161184: 0x24a90320  addiu       $t1, $a1, 0x320
    ctx->pc = 0x161184u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 800));
    // 0x161188: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x161188u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x16118c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x16118cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_161190:
    // 0x161190: 0x1421821  addu        $v1, $t2, $v0
    ctx->pc = 0x161190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x161194: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x161194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x161198: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x161198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x16119c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x16119cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1611a0: 0x90a304a0  lbu         $v1, 0x4A0($a1)
    ctx->pc = 0x1611a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1184)));
    // 0x1611a4: 0x90a204a2  lbu         $v0, 0x4A2($a1)
    ctx->pc = 0x1611a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1186)));
    // 0x1611a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1611a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1611ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1611acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1611b0: 0xa0a304a0  sb          $v1, 0x4A0($a1)
    ctx->pc = 0x1611b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1184), (uint8_t)GPR_U32(ctx, 3));
    // 0x1611b4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1611b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1611b8: 0x148b0002  bne         $a0, $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1611B8u;
    {
        const bool branch_taken_0x1611b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 11));
        ctx->pc = 0x1611BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611B8u;
        // 0x1611bc: 0xa0a204a2  sb          $v0, 0x4A2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1186), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611b8) {
            ctx->pc = 0x1611C4u;
            goto label_1611c4;
        }
    }
    ctx->pc = 0x1611C0u;
    // 0x1611c0: 0xa0a004a2  sb          $zero, 0x4A2($a1)
    ctx->pc = 0x1611c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1186), (uint8_t)GPR_U32(ctx, 0));
label_1611c4:
    // 0x1611c4: 0x90a204a0  lbu         $v0, 0x4A0($a1)
    ctx->pc = 0x1611c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1184)));
    // 0x1611c8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1611C8u;
    {
        const bool branch_taken_0x1611c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1611c8) {
            ctx->pc = 0x1611CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1611C8u;
            // 0x1611cc: 0x90a208a4  lbu         $v0, 0x8A4($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1611F0u;
            goto label_1611f0;
        }
    }
    ctx->pc = 0x1611D0u;
    // 0x1611d0: 0x90a604a2  lbu         $a2, 0x4A2($a1)
    ctx->pc = 0x1611d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1186)));
    // 0x1611d4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1611d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1611d8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1611d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1611dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1611dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1611e0: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x1611e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1611e4: 0x1060ffea  beqz        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1611E4u;
    {
        const bool branch_taken_0x1611e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611E4u;
        // 0x1611e8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611e4) {
            ctx->pc = 0x161190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161190;
        }
    }
    ctx->pc = 0x1611ECu;
label_1611ec:
    // 0x1611ec: 0x90a208a4  lbu         $v0, 0x8A4($a1)
    ctx->pc = 0x1611ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2212)));
label_1611f0:
    // 0x1611f0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1611F0u;
    {
        const bool branch_taken_0x1611f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611F0u;
        // 0x1611f4: 0x24a206a4  addiu       $v0, $a1, 0x6A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611f0) {
            ctx->pc = 0x161284u;
            goto label_161284;
        }
    }
    ctx->pc = 0x1611F8u;
    // 0x1611f8: 0x90a608a6  lbu         $a2, 0x8A6($a1)
    ctx->pc = 0x1611f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2214)));
    // 0x1611fc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1611fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161200: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x161200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x161204: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x161204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x161208: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x161208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16120c: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x16120cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x161210: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x161210u;
    {
        const bool branch_taken_0x161210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x161214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161210u;
        // 0x161214: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161210) {
            ctx->pc = 0x161284u;
            goto label_161284;
        }
    }
    ctx->pc = 0x161218u;
    // 0x161218: 0x24a904a4  addiu       $t1, $a1, 0x4A4
    ctx->pc = 0x161218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 1188));
    // 0x16121c: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x16121cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x161220: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x161220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x161224: 0x0  nop
    ctx->pc = 0x161224u;
    // NOP
label_161228:
    // 0x161228: 0x1421821  addu        $v1, $t2, $v0
    ctx->pc = 0x161228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x16122c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x16122cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x161230: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x161230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x161234: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x161234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x161238: 0x90a308a4  lbu         $v1, 0x8A4($a1)
    ctx->pc = 0x161238u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2212)));
    // 0x16123c: 0x90a208a6  lbu         $v0, 0x8A6($a1)
    ctx->pc = 0x16123cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2214)));
    // 0x161240: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x161240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x161244: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x161244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x161248: 0xa0a308a4  sb          $v1, 0x8A4($a1)
    ctx->pc = 0x161248u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2212), (uint8_t)GPR_U32(ctx, 3));
    // 0x16124c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x16124cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x161250: 0x148b0002  bne         $a0, $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x161250u;
    {
        const bool branch_taken_0x161250 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 11));
        ctx->pc = 0x161254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161250u;
        // 0x161254: 0xa0a208a6  sb          $v0, 0x8A6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2214), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161250) {
            ctx->pc = 0x16125Cu;
            goto label_16125c;
        }
    }
    ctx->pc = 0x161258u;
    // 0x161258: 0xa0a008a6  sb          $zero, 0x8A6($a1)
    ctx->pc = 0x161258u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2214), (uint8_t)GPR_U32(ctx, 0));
label_16125c:
    // 0x16125c: 0x90a208a4  lbu         $v0, 0x8A4($a1)
    ctx->pc = 0x16125cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2212)));
    // 0x161260: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x161260u;
    {
        const bool branch_taken_0x161260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161260) {
            ctx->pc = 0x161284u;
            goto label_161284;
        }
    }
    ctx->pc = 0x161268u;
    // 0x161268: 0x90a608a6  lbu         $a2, 0x8A6($a1)
    ctx->pc = 0x161268u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2214)));
    // 0x16126c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x16126cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x161270: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x161270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x161274: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x161274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161278: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x161278u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16127c: 0x1060ffea  beqz        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x16127Cu;
    {
        const bool branch_taken_0x16127c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16127Cu;
        // 0x161280: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16127c) {
            ctx->pc = 0x161228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161228;
        }
    }
    ctx->pc = 0x161284u;
label_161284:
    // 0x161284: 0x3e00008  jr          $ra
    ctx->pc = 0x161284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16128Cu;
    // 0x16128c: 0x0  nop
    ctx->pc = 0x16128cu;
    // NOP
    ctx->pc = 0x161290u;
}
